#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::~Enemy() {}

Enemy::Enemy(int x, int y) {
	pos[0] = x;
	pos[1] = y;
}

Enemy::Enemy(Enemy const &obj) {
	hp = obj.hp;
}
/*
int* Enemy::getDir()
{
	return ((int*) dir);
}

int* Enemy::getSize()
{
	return ((int*)size);
}
*/
int* Enemy::getPos()
{
	return ((int*)pos);
}
/*
void Enemy::damage(int damage)
{
	hp -= damage;
}

int Enemy::intersect(int *pos1, int *pos2, int *size1, int *size2)
{
	return (!((pos1[0] + size1[0] < pos2[0]) || (pos2[0] + size2[0] < pos1[0]) ||
			(pos1[1] + size1[1] < pos2[1]) || (pos2[1] + size2[1] < pos1[1])));

}
*/
void Enemy::move(int key)
{

}
/*
int Enemy::exist(int cycleNum)
{
	if (cycleNum % speed)
	{
		//object logic
		//check intersection with all other objects
		//if nothing found do something and send appropriate signal to  GameLogic
	}
	return (1);
}
 */