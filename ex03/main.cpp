#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include "Fixed.class.hpp"
#include "eval_expr.hpp"

static char		*advance_digit(char *str) {
	while (isdigit(*str)) {
		str++;
	}
	return str;
}

static char		*skip_space(char *str) {
	while (*str == ' ') {
		str++;
	}
	return str;
}

static bool		is_sign(int c) {
	return c == '-' || c == '+';
}

static void		error_exit(char c) {
	if (c) {
		std::cerr << "Syntax error near: '" << c << '\'' << std::endl;
	} else {
		std::cerr << "Syntax error: unexpected end of expression" << std::endl;
	}
	exit(EXIT_FAILURE);
}

static Fixed	evaluate_parenthesis(char **expression) {
	*expression = *expression + 1;
	*expression = skip_space(*expression);
	Fixed result = parse_sum_subst(expression);
	*expression = skip_space(*expression);

	if (**expression != ')') {
		error_exit(**expression);
	}
	*expression = *expression + 1;
	*expression = skip_space(*expression);
	return result;
}

static Fixed	parse_number(char **expression) {
	char	*n_end = *expression;
	bool	isfloat = false;
	int		i;
	float	f;

	if (is_sign(*n_end))
		n_end++;
	n_end = advance_digit(n_end);
	if (*n_end == '.') {
		isfloat = true;
		n_end++;
		n_end = advance_digit(n_end);
	}
	std::string			str(*expression, n_end - *expression);
	*expression = n_end;
	std::istringstream	ss(str);
	if (isfloat) {
		ss >> f;
		return Fixed(f);
	} else {
		ss >> i;
		return Fixed(i);
	}
}

static Fixed	parse_format(char **expression) {
	char	*n_end = *expression;

	if (isdigit(*n_end) ||
			(is_sign(*n_end) && isdigit(*(n_end + 1)))) {
		return parse_number(expression);
	} else if (**expression == '(') {
		return evaluate_parenthesis(expression);
	} else {
		error_exit(**expression);
	}
	return Fixed(0);
}

static Fixed	parse_div_mult(char **expression) {
	*expression = skip_space(*expression);
	Fixed	total = parse_format(expression);
	char	op = **expression;

	*expression = skip_space(*expression);
	while (op == '*' || op == '/') {
		*expression = *expression + 1;
		*expression = skip_space(*expression);
		Fixed n = parse_format(expression);
		*expression = skip_space(*expression);
		if (op == '*') {
			total = total * n;
		} else {
			total = total / n;
		}
		op = **expression;
	}
	return total;
}

Fixed			parse_sum_subst(char **expression) {
	*expression = skip_space(*expression);
	Fixed	total = parse_div_mult(expression);
	char	op = **expression;

	*expression = skip_space(*expression);
	while (op == '+' || op == '-') {
		*expression = *expression + 1;
		*expression = skip_space(*expression);
		Fixed n = parse_div_mult(expression);
		*expression = skip_space(*expression);
		if (op == '+') {
			total = total + n;
		} else {
			total = total - n;
		}
		op = **expression;
	}
	if (op && op != ')' && (!isdigit(op) ||
			(!is_sign(op) && !isdigit(*(*expression + 1))))) {
		error_exit(**expression);
	}
	return total;
}

int				main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " \"math_expression\"" << std::endl;
		return 1;
	}
	char	*expression = argv[1];

	expression = skip_space(expression);
	if (!*expression) {
		return 0;
	}
	Fixed	res = parse_sum_subst(&expression);
	if (*expression) {
		error_exit(*expression);
	} else {
		std::cout << res << std::endl;
	}
	return 0;
}
