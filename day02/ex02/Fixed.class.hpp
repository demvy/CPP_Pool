
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
		Fixed(Fixed const &a);
		Fixed(const int &number);
		Fixed(float number);
		~Fixed(void);
		Fixed & operator=(Fixed const &a);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		bool operator>(Fixed const & number) const;
		bool operator<(Fixed const & number) const;
		bool operator>=(Fixed const & number) const;
		bool operator<=(Fixed const & number) const;
		bool operator==(Fixed const & number) const;
		bool operator!=(Fixed const & number) const;
		Fixed operator+(Fixed const & number) const;
		Fixed operator-(Fixed const & number) const;
		Fixed operator*(Fixed const & number) const;
		Fixed operator/(Fixed const & number) const;
		Fixed & operator++(void);
		Fixed & operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		static Fixed const &max(Fixed const &a, Fixed const &b);
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static Fixed &min(Fixed &a, Fixed &b);
};

std::ostream & operator<<(std::ostream &o, Fixed const &number);


#endif