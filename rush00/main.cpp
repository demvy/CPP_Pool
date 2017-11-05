
#include <ncurses.h>
#include <string>
#include <unistd.h>
#include "Game.hpp"
#include "Player.hpp"
#include <ctime>

WINDOW *init_window(void) {
    WINDOW* wnd;
    wnd = initscr();
    cbreak();
    noecho();
    keypad(wnd, true);
    curs_set(0);
    return (wnd);
}

int main(void)
{
    //WINDOW *wnd = init_window();

    /*int x;
    int y;
    getmaxyx(wnd, y, x);
    Player player;
    player.setPosition(x, y);
    player.run(wnd);
    wrefresh(wnd);*/
    srand(time(0));
    Game first;
    first.start();
    endwin();
    return (0);
}