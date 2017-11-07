
#include <ctime>
#include "Game.class.hpp"

int main(void) {
  struct timespec timeOut, remains;
  timeOut.tv_sec = 0;
  timeOut.tv_nsec = 10000000;

  Game game = Game();
  game.init();

  while (game.isRunning) {
    game.inputLogic();
    game.moveEntities();
    game.display();
    nanosleep(&timeOut, &remains);
  }

  return (0);
}