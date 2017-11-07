
#ifndef POINT_HPP
# define POINT_HPP

class GameEntity;

struct Point {
  GameEntity *entity;
  bool isMoved;
  bool back;
};

#endif