#ifndef FIXED_CLASS_HPP_
#define FIXED_CLASS_HPP_
#include <cmath>
#include <iostream>

class	Fixed {
	public:
							Fixed();
		explicit			Fixed(const int n);
		explicit			Fixed(const float n);
							Fixed(Fixed const & src);
							~Fixed();
		int					getRawBits() const;
		void				setRawBits(int const raw);
		Fixed &				operator=(Fixed const & rhs);
		int					toInt() const;
		float				toFloat() const;
	private:
		int					_value;
		static const int	_fractional_bits;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif  // FIXED_CLASS_HPP_
