#ifndef PLAYER_H
#define PLAYER_H

#include <graphics.h>
#include "../point/point.hpp"
#include "../score/score.hpp"
#include "../hitArea/hitArea.hpp"

// inheritence public HitArea, aggr Score, composition point

using namespace std;

class Player : public HitArea 
{
    protected :
        Point p;
        Score *sc;
        int size;
        int dx;
        int scVec;
    public :
        Player();
        Player(int _x, int _y, int s);
        void move();
        void setHorizontalMove(int _dx);
        Point getLocation() const;
        void setScVec(int i);
        void gotHit();
        void drawPlayer();
        void undrawPlayer();

        //void incrementScore(int value); //f
        int getPlayerScore() const;
        //void printScore() const;

};

#endif