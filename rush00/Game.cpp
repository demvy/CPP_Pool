
#include "Game.hpp"

Game::Game() {
    std::cout<<"Const"<<std::endl;
}

Game::~Game() {
    std::cout<<"Des"<<std::endl;
}

void Game::screen() {
    std::cout<<"Screen"<<std::endl;
    WINDOW *wnd;
    wnd = initscr();
    cbreak();
    noecho();
    keypad(wnd, true);
    curs_set(0);
    win = wnd;
    getmaxyx(wnd, sizey, sizex);
    std::cout<<sizex<<"/"<<sizey<<std::endl;
    std::cout<<"fefegrghr"<<std::endl;
}

Bullet &Game::findFreeBullet() {
    for(int i=0; i < sizey; i++) {
        if (bull[i].isFree())
            return bull[i];
    }
}

void Game::start() {
    std::cout<<"Start"<<std::endl;
    screen();
    player.setPos(3, sizey/2);
    player.setChar('>');
    bull = new Bullet[sizex];
    //enemies = new Enemy[100];
    bool exit_requested = false;
    int in_char;
    Bullet bul;
    std::cout<<sizex<<"|"<<sizey<<std::endl;
    while (!exit_requested){
        clear();
        in_char = getch();
        bul = findFreeBullet();
        bul.setSize(sizex, sizey);
        player.move(in_char);
        if (in_char == ' ')
            player.shoot(bul);
        usleep(100000);
        //mvaddch(player.getPos()[0], player.getPos()[1], player.getChar());
        refresh();
    }
}
