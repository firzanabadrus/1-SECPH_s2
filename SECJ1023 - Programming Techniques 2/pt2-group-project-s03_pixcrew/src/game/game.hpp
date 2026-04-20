#ifndef GAME_H
#define GAME_H

// #include "timer.hpp"
#include <iostream>
#include <graphics.h>
#include <cstdlib>
#include <vector>
#include <ctime>
#include "../score/score.hpp"
#include "../background/background.hpp"
#include "../player/player.hpp"
#include "../floor/floor.hpp"
#include "../food/food.hpp"

using namespace std;

class Game
{
    protected:
        int width;
        int height;
        int buffer;
        clock_t lastFoodTime;
        const int foodInterval = 1000;
        int ch;

        Background b;
        Score s;
        Player play;
        Floor floor;
        Food f;
        vector<Food*> foods;

    public:
    
        Game();
        void initialize();
        void input();
        void render();
        void loop();
        void end();
        void run();
};

#endif