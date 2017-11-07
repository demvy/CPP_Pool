
#ifndef STARSHIP_CLASS_HPP
# define STARSHIP_CLASS_HPP

#include <iostream>
#include "GameEntity.class.hpp"

class StarShip : public GameEntity {
public:
  StarShip(std::string name, char type, int width, int height, int x, int y);
  StarShip(StarShip const & src);
  virtual ~StarShip(void);
  

  StarShip& operator=(StarShip const & rhs);

private:
  StarShip(void);
};

#endif