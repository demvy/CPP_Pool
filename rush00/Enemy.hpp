#ifndef FT_RETRO_ENEMY_HPP
# define FT_RETRO_ENEMY_HPP

# include "Object.hpp"

class Enemy : public Object
{
public:
	//Enemy(t_database dataBase, int type);
    //bool     isIntersects(Object const &obj);
    int*    getPos();
    void setPos(int x, int y);
	//int*    getSize();
	//int*    getDir();
	//int     exist(int cycleNum);
	//void    damage(int damage);
	void    move(int key);
    Enemy();
	~Enemy();
    Enemy(int x, int y);
    Enemy(Enemy const &obj);
};


#endif
