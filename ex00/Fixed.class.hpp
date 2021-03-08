#ifndef FIXED_CLASS_HPP_
#define FIXED_CLASS_HPP_
#include <cstdint>
#include <iostream>

class	Fixed {
	public:
		Fixed();
		Fixed(Fixed const & src);
		~Fixed();
		int					getRawBits() const;
		void				setRawBits(int const raw);
		Fixed &				operator=(Fixed const & rhs);
	private:
		int					_value;
		static const int	_fractional_bits;
};

#endif  // FIXED_CLASS_HPP_
