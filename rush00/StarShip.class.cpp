
#include "StarShip.class.hpp"

/* OPERATORS */

StarShip::StarShip(std::string name, char type, int width, int height, int x, int y) : GameEntity(name, type, width, height, x, y) {
  return;
}

StarShip::StarShip(StarShip const & src) : GameEntity(src) {
  *this = src;
  return;
}

StarShip::~StarShip(void) {
  return;
}

/* OPERATORS */

StarShip& StarShip::operator=(StarShip const & rhs) {
  this->_x = rhs.getX();
  this->_y = rhs.getY();
  this->_name = rhs.getName();
  this->_moveSize = rhs.getMoveSize();
  this->_type = rhs.getType();
  this->_width = rhs.getWidth();
  this->_height = rhs.getHeight();
  return *this;
}