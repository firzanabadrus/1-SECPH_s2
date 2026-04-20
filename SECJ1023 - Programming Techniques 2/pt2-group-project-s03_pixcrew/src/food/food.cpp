#include <graphics.h>
#include <cmath>
#include "food.hpp"
#include "../point/point.hpp"
#include "../score/score.hpp"
#include "../floor/floor.hpp"
#include "../player/player.hpp"
#include "../hitArea/hitArea.hpp"

Food::Food() : point(0, 0), size(0), color(0){}

Food::Food(int _x, int _y, int s, int c, int sc) : point(_x, _y), size(s), color(c) { score.setScore(sc); }

void Food::fall() { point.setY(point.getY() + 20); }

Point Food::getLocation() const { return point; }

int Food::getScorefood() const { return score.getScore(); }

int Food::getSize() const { return size; }

int Food::randSize(int x)
{
    if (x == 3)
        return 25;
    else if (x == 2)
        return 35;
    else
        return 40;
}

int Food::randColor(int x)
{
    if (x == 3)
        return RGB(163, 209, 175);

    else if (x == 2)
        return RGB(217, 163, 205);

    else
        return RGB(113, 127, 176);
}

int Food::getRandomX() 
{
    int min = 250;
    int max = getmaxwidth() - 250;
    point.setX(min + rand() % (max - min));
    return point.getX();
}

bool Food::hitTest(Player &p, Floor &flo) const
{
    int playDist = sqrt((pow(getLocation().getX() - p.getLocation().getX(), 2)) + (pow(getLocation().getY() - p.getLocation().getY(), 2)));
    
    if (getLocation().getY() > 670)
    {
        HitArea *h = &flo;
        h->gotHit();
        return true;
    }

    else if(playDist <= 95 && (size == 25))
    {
        HitArea *h = &p;
        h->gotHit();
        return true;
    }

    else if(playDist <= 105 && (size == 35))
    {
        HitArea *h = &p;
        h->gotHit();
        return true;
    }

    else if(playDist <= 110 && (size == 40))
    {
        HitArea *h = &p;
        h->gotHit();
        return true;
    }

    else
        return false;
}

void Food::drawFood() const
{
    setcolor(RGB(97, 94, 133));
    setfillstyle(SOLID_FILL, color);
    fillellipse(point.getX(), point.getY(), size, size);
}

void Food::undrawFood() const
{
    setcolor(RGB(144, 180, 222));
    setfillstyle(SOLID_FILL, RGB(144, 180, 222));
    fillellipse(point.getX(), point.getY(), size, size);
}