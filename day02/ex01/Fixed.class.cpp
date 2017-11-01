
#include "Fixed.class.hpp"

Fixed::Fixed() {
	_point = 0;
	std::cout<<"Default constructor"<<std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout<<"getRawBits called"<<std::endl;
	return (_point);
}

Fixed::Fixed(Fixed const &a) {
	std::cout<<"Copy constructor"<<std::endl;
	_point = a.getRawBits();
}

Fixed::Fixed(const int &number) {
	
}

Fixed::~Fixed() {
	std::cout<<"Destructor called"<<std::endl;
}

Fixed & Fixed::operator=(Fixed const &a) {
	std::cout<<"Operator = "<<std::endl;
	this->_point = a.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw) {
	_point = raw;
}
