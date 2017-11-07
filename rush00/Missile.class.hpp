
#ifndef MISSILE_CLASS_HPP
# define MISSILE_CLASS_HPP

#include <iostream>
#include "GameEntity.class.hpp"

class Missile : public GameEntity {
public:
  Missile(std::string name, char type, int width, int height, int x, int y);
  Missile(Missile const & src);
  virtual ~Missile(void);

  Missile& operator=(Missile const & rhs);

private:
  Missile(void);
};

#endif