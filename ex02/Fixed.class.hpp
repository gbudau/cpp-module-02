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
		bool				operator>(Fixed const & rhs) const;
		bool				operator<(Fixed const & rhs) const;
		bool				operator>=(Fixed const & rhs) const;
		bool				operator<=(Fixed const & rhs) const;
		bool				operator==(Fixed const & rhs) const;
		bool				operator!=(Fixed const & rhs) const;
		Fixed				operator+(Fixed const & rhs) const;
		Fixed				operator-(Fixed const & rhs) const;
		Fixed				operator*(Fixed const & rhs) const;
		Fixed				operator/(Fixed const & rhs) const;
		Fixed &				operator++();
		Fixed 				operator++(int);
		Fixed &				operator--();
		Fixed 				operator--(int);
		static Fixed &		min(Fixed & a, Fixed & b);
		static Fixed &		max(Fixed & a, Fixed & b);

	private:
		int					_value;
		static const int	_fractional_bits;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif  // FIXED_CLASS_HPP_
