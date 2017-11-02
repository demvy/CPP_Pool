
#include "Fixed.class.hpp"

Fixed::Fixed() {
	_point = 0;
	std::cout<<"Default constructor"<<std::endl;
}

int Fixed::getRawBits(void) const {
	//std::cout<<"getRawBits called"<<std::endl;
	return (_point);
}

Fixed::Fixed(Fixed const &a) {
	std::cout<<"Copy constructor"<<std::endl;
	_point = a.getRawBits();
}

Fixed::Fixed(const int &number) {
	_point = number << _len;
	std::cout<<"Int constructor"<<std::endl;
}

Fixed::Fixed(const float &number) {
	_point = roundf((1 << _len) * number);
	std::cout<<"Float constructor"<<std::endl;
}

Fixed::~Fixed() {
	std::cout<<"Destructor called"<<std::endl;
}

float Fixed::toFloat(void) const {
	return (float(_point) / (1 << _len));
}

int Fixed::toInt(void) const {
	return (_point >> _len);
}

Fixed & Fixed::operator=(Fixed const &a) {
	std::cout<<"Operator = "<<std::endl;
	this->_point = a.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw) {
	_point = raw;
}

std::ostream & operator<<(std::ostream &o, Fixed const &number) {
	o << number.toFloat();
	return o;
}