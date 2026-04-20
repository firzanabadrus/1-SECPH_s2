#ifndef FOOD_H
#define FOOD_H

#include <graphics.h>
#include "../point/point.hpp"
#include "../score/score.hpp"
#include "../floor/floor.hpp"
#include "../player/player.hpp"
#include "../hitArea/hitArea.hpp"

class Food
{
    protected:
        Point point;
        Score score;
        int size;
        int color;

    public:
        Food();
        Food(int _x, int _y, int s, int c, int sc);
        void fall();
        Point getLocation() const;
        int getScorefood() const;
        int getSize() const;
        int randSize(int x);
        int randColor(int x);
        int getRandomX();
        bool hitTest(Player &p, Floor &flo) const;
        void drawFood() const;
        void undrawFood() const;

};

#endif