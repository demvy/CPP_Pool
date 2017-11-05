#ifndef FT_RETRO_BULLET_HPP
# define FT_RETRO_BULLET_HPP

# include "Object.hpp"
#include <iostream>
#include <unistd.h>

class Bullet : public Object
{
private:
    static const int damage = 20;
    bool free;
public:
	Bullet();
	Bullet(int x, int y);
    Bullet(Bullet const &obj);
    Bullet &operator=(Bullet const &obj);
    //bool isIntersects(Object const &obj);
	int*    getPos();
    bool isFree();
    void setSize(int x, int y);
	//int*    getSize();
	//int*    getDir();
	//int     exist(int cycleNum);
	//void    makeDamage(Object &obj);
	void    move();
	~Bullet();
};


#endif
