
#ifndef GAME_HPP
# define GAME_HPP

#include <iostream>
#include <string>
#include "Bullet.hpp"
#include "Player.hpp"
#include "Enemy.hpp"

class Game {
private:
    WINDOW *win;
    Bullet *bull;
    int sizex;
    int sizey;
    Player player;
    Enemy *enemies;
public:
    Game();
    ~Game();
    void start();
    void screen();
    Bullet &findFreeBullet();

};

#endif