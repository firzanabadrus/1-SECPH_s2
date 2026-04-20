// #include<graphics.h>
// #include<iostream>
#include "game/game.hpp"

int main()
{
    Game *game;
    game = new Game();
    game->initialize();
    game->run();

    getch();

    system("pause");
    return 0;
}
