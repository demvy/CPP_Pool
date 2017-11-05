#ifndef FT_RETRO_OBLECT_HPP
# define FT_RETRO_OBLECT_HPP

# include <cstdlib>
# include <ncurses.h>
#include <string>
#include <iostream>

class Object
{
protected:
	int     hp;
    //std::string *form[];
	int     pos[2];
    char    c;
	int     sizex;
    int     sizey;
	//int     dir[2];
	//int     speed;

public:
	Object();
	virtual ~Object();
	Object &operator=(Object const &obj);
	Object(Object const &obj);
	virtual bool     isIntersects(Object const &obj);
	int*    getPos() const;
	int     getHP() const;
    void setChar(char _c);
    char getChar() const;
    void setPos(int x, int y);
	//virtual int*    getDir();
	virtual void    move(int key);
	//virtual void    damage(int damage);
	//virtual int     exist(int cycleNum);
};


#endif
