
#include <ncurses.h>
#include <string>
#include <unistd.h>

int main(int argv, char** argc)
{
    WINDOW* wnd;
    wnd = initscr();
    cbreak();
    noecho();
    keypad(wnd, true);
    curs_set(0);
    int in_char;

    int x=5;
    int y=5;
    bool exit_requested = false;
    while(!exit_requested) {
        in_char = wgetch(wnd);

        switch(in_char) {
            case 'q':
                exit_requested = true;
                break;
            case KEY_UP:
                y--;
                break;
            case KEY_DOWN:
                y++;
                break;
            case KEY_LEFT:
                x--;
                break;
            case KEY_RIGHT:
                x++;
                break;
            default:
                break;
        }
        clear();
        mvaddch(y, x, '$');
        wrefresh(wnd);
        usleep(1000);
        wrefresh(wnd);
    }
    wrefresh(wnd);
    while(1);
    return (0);
}