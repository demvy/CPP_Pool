
#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>

class Fixed {
	private:
		int	_point;
		static const int len = 8;
	public:
		Fixed(void);
		explicit Fixed(Fixed const &a);
		~Fixed(void);
		Fixed & operator=(Fixed const &a);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};


#endif