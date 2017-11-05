#include "Bullet.hpp"

Bullet::Bullet() : Object() {
    free = true;
}

Bullet::Bullet(Bullet const &obj) {
	hp = obj.hp;
}

Bullet::Bullet(int x, int y) {
    pos[0] = x;
    pos[1] = y;
}

Bullet& Bullet::operator=(Bullet const &obj) {
    hp = obj.hp;
    return (*this);
}

bool Bullet::isFree() {
    return free;
}

int* Bullet::getPos() {
	return ((int*)pos);
}
/*
void Bullet::makeDamage(Object &obj) {
	obj.hp -= damage;
}
*/
void Bullet::setSize(int x, int y) {
    sizex = x;
    sizey = y;
    //std::cout<<"Setting size "<<sizex<<"/"<<sizey<<std::endl;
}

void Bullet::move()
{
    //std::cout<<"govno mamonta"<<std::endl;
    free = false;
    //std::cout<<sizey<<"/"<<sizex<<std::endl;
    while(pos[0] < sizex) {
        //mvaddch(pos[1], pos[0], ' ');
        //std::cout<<"/bin"<<std::endl;

        pos[0] += 1;
        mvaddch(pos[1], pos[0], c);
        //refresh();
    }
    //mvaddch(pos[1], pos[0], c);
    //refresh();
    free = true;
}

Bullet::~Bullet() {}
/*int Bullet::intersect(int *pos1, int *pos2, int *size1, int *size2)
{
	return (!((pos1[0] + size1[0] < pos2[0]) || (pos2[0] + size2[0] < pos1[0]) ||
	          (pos1[1] + size1[1] < pos2[1]) || (pos2[1] + size2[1] < pos1[1])));

}
*/
/*
int Bullet::exist(int cycleNum)
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
