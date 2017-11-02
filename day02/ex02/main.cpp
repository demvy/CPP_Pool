
#include "Fixed.class.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(23.4f) / Fixed( 0.0f ));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}