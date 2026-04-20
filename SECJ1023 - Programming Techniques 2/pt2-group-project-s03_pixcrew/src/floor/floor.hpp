#ifndef FLOOR_H
#define FLOOR_H
#include "../point/point.hpp"
#include "../hitArea/hitArea.hpp"
#include "../score/score.hpp"

using namespace std;

class Floor : public HitArea
{
    protected :
        Point point;
        int width, height;
        int lives;

    public :
        Floor();
        Floor(int _x, int _y, int _width, int _height, int l);
        void drawFloor();
        int getLives() const;
        void drawHeart(int x, int y);
        void undrawHeart(int x, int y);
        void drawLives();
        void undrawLives();
        void gotHit();
        
};

#endif