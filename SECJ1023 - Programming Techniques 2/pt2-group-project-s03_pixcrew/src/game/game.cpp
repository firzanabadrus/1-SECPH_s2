#include <iostream>
#include <graphics.h>
#include <cstdlib>
#include <vector>
#include "../game/game.hpp"
#include "../food/food.hpp"
#include "../score/score.hpp"
#include "../background/background.hpp"
#include "../player/player.hpp"
#include "../floor/floor.hpp"

Game::Game() :  width(getmaxwidth()), height(getmaxheight()), buffer(0), ch(0), 
                play((width / 2), 600, 100), floor(0, 670, width, height - 670, 3) {}


void Game::initialize()
{
    initwindow(width, height, "Meow Munch Madness :3");

    setbkcolor(RGB(144, 180, 222));
    cleardevice();
    b.drawBackground();

    floor.drawFloor();
    floor.drawLives();

    setactivepage(buffer);

    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 7);
    outtextxy(width / 2 - 385, height / 2, "CLICK TO PLAY!");

    play.drawPlayer();
    play.setHorizontalMove(0);


}

void Game::input()
{
    if (kbhit())
    {
        ch = getch();
        if (ch == 0)
            ch = getch();
        switch (ch)
        {
            case 77:
                play.setHorizontalMove(50);
                break;
            case 75:
                play.setHorizontalMove(-50);
                break;
        }
    }
}

void Game::render()
{
    for(int i = 0; i < foods.size(); ++i)
    {
        auto it = foods.begin();
        (*it)->fall();
        play.setScVec((*it)->getScorefood());
        if((*it)->hitTest(play, floor)) 
        {
            it = foods.erase(it);
        }
        else
        {
            ++it;
        }
    }

    for (auto &food : foods)
    {
        food->drawFood();
    }
}

void Game::loop()
{

    // Switch to offscreen buffer
    buffer = 1 - buffer;
    setactivepage(buffer);
    setbkcolor(RGB(144, 180, 222));
    cleardevice(); // Clear the offscreen buffer

    // Redraw the background and floor
    b.drawBackground();
    floor.drawFloor();
    floor.undrawLives();
    floor.drawLives();

    render();

    // Move and draw the player
    play.move();
    play.drawPlayer();

    input();

    // Draw score box
    s.drawScoreBox(play.getPlayerScore());

    // Switch to the visible page
    setvisualpage(buffer);

    delay(100);

    if(floor.getLives() == 0){
        ch = 27;
    }
}

void Game::end()
{
    setbkcolor(RGB(144, 180, 222));
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 7);
    outtextxy(width / 2 - 280, height / 2, "GAME OVER!");
    getch();
}

void Game::run()
{
    while (ch != 27)
    {
        if (ismouseclick(WM_LBUTTONDOWN))
        {
            setcolor(RGB(144, 180, 222));
            settextstyle(DEFAULT_FONT, HORIZ_DIR, 7);
            outtextxy(width / 2 - 385, height / 2, "CLICK TO PLAY!");
            clearmouseclick(WM_LBUTTONDOWN);

            while (ch != 27)
            {
                loop();
            }
        }
    }
    end();
}



