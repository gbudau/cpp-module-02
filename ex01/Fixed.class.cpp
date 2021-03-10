#include "Fixed.class.hpp"

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int i) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = i << Fixed::_fractional_bits;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(f * (1 << Fixed::_fractional_bits));
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return;
}

int			Fixed::getRawBits() const {
	return this->_value;
}

void		Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed &		Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_value = rhs.getRawBits();
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}

int			Fixed::toInt() const {
	return this->_value >> Fixed::_fractional_bits;
}

float		Fixed::toFloat() const {
	return this->_value * (1.0f / (1 << Fixed::_fractional_bits));
}

const int	Fixed::_fractional_bits = 8;
