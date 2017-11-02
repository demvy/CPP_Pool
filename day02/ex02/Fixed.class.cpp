
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

Fixed::Fixed(float number) {
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

bool Fixed::operator>(Fixed const & number) const {
	return (_point > number._point);
}

bool Fixed::operator<(Fixed const & number) const {
	return (number > *this);
}

bool Fixed::operator==(Fixed const & number) const {
	return (_point == number._point);
}

bool Fixed::operator!=(Fixed const & number) const {
	return !(*this == number);
}

bool Fixed::operator>=(Fixed const & number) const {
	return !(*this < number);
}

bool Fixed::operator<=(Fixed const & number) const {
	return !(*this > number);
}

Fixed Fixed::operator+(Fixed const & number) const {
	return Fixed(this->toFloat() + number.toFloat());
}

Fixed Fixed::operator-(Fixed const & number) const {
	return Fixed(this->toFloat() - number.toFloat());
}

Fixed Fixed::operator*(Fixed const & number) const {
	return Fixed(this->toFloat() * number.toFloat());
}

Fixed Fixed::operator/(Fixed const & number) const {
	return Fixed(this->toFloat() / number.toFloat());
}

Fixed & Fixed::operator++(void) {
	_point++;
	return (*this);
}

Fixed & Fixed::operator--(void) {
	_point--;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed old(*this);
	++old;
	return (old);
}

Fixed Fixed::operator--(int) {
	Fixed old(*this);
	--old;
	return (old);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
	return (a >= b) ? a : b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
	return (a >= b) ? b : a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return (a >= b) ? a : b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return (a >= b) ? b : a;
}
