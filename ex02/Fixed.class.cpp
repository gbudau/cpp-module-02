#include "Fixed.class.hpp"

Fixed::Fixed() : _value(0) {
	return;
}

Fixed::Fixed(const int i) {
	this->_value = i << Fixed::_fractional_bits;
}

Fixed::Fixed(const float f) {
	this->_value = roundf(f * (1 << Fixed::_fractional_bits));
}

Fixed::Fixed(Fixed const & src) {
	*this = src;
	return;
}

Fixed::~Fixed() {
	return;
}

int			Fixed::getRawBits() const {
	return this->_value;
}

void		Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

Fixed &		Fixed::operator=(Fixed const & rhs) {
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

bool		Fixed::operator>(Fixed const & rhs) {
	return this->_value > rhs.getRawBits();
}

bool		Fixed::operator<(Fixed const & rhs) {
	return this->_value < rhs.getRawBits();
}

bool		Fixed::operator>=(Fixed const & rhs) {
	return this->_value >= rhs.getRawBits();
}

bool		Fixed::operator<=(Fixed const & rhs) {
	return this->_value <= rhs.getRawBits();
}

bool		Fixed::operator==(Fixed const & rhs) {
	return this->_value == rhs.getRawBits();
}

bool		Fixed::operator!=(Fixed const & rhs) {
	return this->_value != rhs.getRawBits();
}

Fixed		Fixed::operator+(Fixed const & rhs) const {
	Fixed	tmp;

	tmp.setRawBits(this->_value + rhs.getRawBits());
	return tmp;
}

Fixed		Fixed::operator-(Fixed const & rhs) const {
	Fixed	tmp;

	tmp.setRawBits(this->_value - rhs.getRawBits());
	return tmp;
}

Fixed		Fixed::operator*(Fixed const & rhs) const {
	Fixed	tmp;

	tmp.setRawBits(((long(this->_value) * long(rhs.getRawBits())) >>
													Fixed::_fractional_bits));
	return tmp;
}

Fixed		Fixed::operator/(Fixed const & rhs) const {
	Fixed	tmp;

	tmp.setRawBits((long(this->_value) << Fixed::_fractional_bits) /
															rhs.getRawBits());
	return tmp;
}

Fixed &		Fixed::operator--() {
	this->_value--;
	return *this;
}

Fixed 		Fixed::operator--(int) {
	Fixed	tmp = *this;

	this->_value--;
	return tmp;
}

Fixed &		Fixed::operator++() {
	this->_value++;
	return *this;
}

Fixed 		Fixed::operator++(int) {
	Fixed	tmp = *this;

	this->_value++;
	return tmp;
}

const int	Fixed::_fractional_bits = 8;
