
#include "Object.hpp"

Object::Object() {
    hp = 100;
    pos[0] = 0;
    pos[1] = 0;
}

Object::~Object() {
}

Object::Object(Object const &obj) {
    hp = obj.hp;
    pos[0] = obj.pos[0];
    pos[1] = obj.pos[1];
}

Object& Object::operator=(Object const &obj) {
    hp = obj.hp;
    pos[0] = obj.pos[0];
    pos[1] = obj.pos[1];
    return (*this);
}

bool     Object::isIntersects(Object const &obj) {
    return  (pos[0] == obj.pos[0] && pos[1] == obj.pos[1]);
}

void Object::setChar(char _c) {
    c = _c;
}


int* Object::getPos() const {
    return ((int*)pos);
}

int Object::getHP() const {
    return hp;
}

void Object::setPos(int x, int y) {
    pos[0] = x;
    pos[1] = y;
}


void Object::move(int key) {
    std::cout<<"fwfwfwfwfwf"<<std::endl;
}

char Object::getChar() const {
    return c;
}