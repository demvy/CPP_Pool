
#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

#include <iostream>
#include "GameEntity.class.hpp"

class Enemy : public GameEntity {
public:
  Enemy(std::string name, char type, int width, int height, int x, int y);
  Enemy(Enemy const & src);
  virtual ~Enemy(void);

  Enemy& operator=(Enemy const & rhs);

private:
  Enemy(void);
};

#endif