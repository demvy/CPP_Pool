#include "Player.hpp"
/*
int* Player::getSize()
{
	return ((int*)size);
}
*/

Player::Player() {
    std::cout<<"player created"<<std::endl;
}

Player::~Player() {
    std::cout<<"player destruct"<<std::endl;
}
int* Player::getPos()
{
	return ((int*)pos);
}
/*
void Player::damage(int damage)
{
	hp -= damage;
}

void Player::move(int *speed)
{
	pos[0] += speed[0];
	pos[1] += speed[1];
}

int Player::intersect(int *pos1, int *pos2, int *size1, int *size2)
{
	return (!((pos1[0] + size1[0] < pos2[0]) || (pos2[0] + size2[0] < pos1[0]) ||
	          (pos1[1] + size1[1] < pos2[1]) || (pos2[1] + size2[1] < pos1[1])));

}

int Player::exist(int cycleNum)
{
	if (cycleNum % speed)
	{
		//object logic
		//check intersection with all other objects
		//if nothing found do something and send appropriate signal to  GameLogic
	}
	return (1);
}*/

void Player::move(int key) {
    mvaddch(pos[1], pos[0], ' ');
    switch(key) {
		case KEY_UP:
			pos[1]--;
			break;
		case KEY_DOWN:
			pos[1]++;
			break;
		case KEY_LEFT:
			pos[0]--;
			break;
		case KEY_RIGHT:
			pos[0]++;
			break;
		default:
			break;
		}
    //clear();
	mvaddch(pos[1], pos[0], c);
    //refresh();
}

void Player::shoot(Bullet &bullet) {
       bullet.setPos(pos[0], pos[1]);
       bullet.setChar('-');
       bullet.move();
    //clear();
        //mvaddch(pos[1], pos[0], c);
        //usleep(1000);
        //refresh();
    refresh();
}
