#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <graphics.h>

using namespace std;

class Background
{
    public :
        Background();
        void drawCloud(int x, int y, int width, int height);
        void drawBackground();
};

#endif