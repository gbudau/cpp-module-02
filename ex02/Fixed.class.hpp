#ifndef FIXED_CLASS_HPP_
#define FIXED_CLASS_HPP_
#include <cmath>
#include <iostream>

class	Fixed {
	public:
							Fixed();
							Fixed(const int n);
							Fixed(const float n);
							Fixed(Fixed const & src);
							~Fixed();
		int					getRawBits() const;
		void				setRawBits(int const raw);
		int					toInt() const;
		float				toFloat() const;
		Fixed &				operator=(Fixed const & rhs);
		bool				operator>(Fixed const & rhs);
		bool				operator<(Fixed const & rhs);
		bool				operator>=(Fixed const & rhs);
		bool				operator<=(Fixed const & rhs);
		bool				operator==(Fixed const & rhs);
		bool				operator!=(Fixed const & rhs);
		Fixed				operator+(Fixed const & rhs) const;
		Fixed				operator-(Fixed const & rhs) const;
		Fixed				operator*(Fixed const & rhs) const;
		Fixed				operator/(Fixed const & rhs) const;
		Fixed &				operator++();
		Fixed 				operator++(int);
		Fixed &				operator--();
		Fixed 				operator--(int);

	private:
		int					_value;
		static const int	_fractional_bits;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif  // FIXED_CLASS_HPP_
