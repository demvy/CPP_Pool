
#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
	private:
		int	_point;
		static const int _len = 8;
	public:
		Fixed(void);
		explicit Fixed(Fixed const &a);
		Fixed(const int &number);
		Fixed(const float &number);
		~Fixed(void);
		Fixed & operator=(Fixed const &a);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream & operator<<(std::ostream &o, Fixed const &number);


#endif