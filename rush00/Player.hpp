#ifndef FT_RETRO_PLAYER_HPP
# define FT_RETRO_PLAYER_HPP

# include "Object.hpp"
# include <ncurses.h>
#include <unistd.h>
#include "Bullet.hpp"

class Player : public Object
{
public:
	//Bullet(t_database dataBase, int type);
	//int     intersect(int* pos1, int* pos2, int* size1, int* size2);
	int*    getPos();
//    bool     isIntersects(Object const &obj);
	//int*    getSize();
	//int*    getDir();
	//int     exist(int cycleNum);
	//void    damage(int damage);
	//void    move(int* speed);
	~Player();
    Player();
	void	move(int key);
    void    shoot(Bullet &bullet);
};


#endif
