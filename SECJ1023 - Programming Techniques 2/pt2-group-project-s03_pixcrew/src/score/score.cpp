#include <graphics.h>
#include <iostream>
#include "../score/score.hpp"

Score :: Score() : score(0){}

void Score :: setScore(int s) { score = s; }

int Score :: getScore() const { return score; }

void Score :: incrementScore(int value) { score += value; }

void Score :: drawScoreBox(int score) 
{
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    bar(1500, 20, 1400, 60);
    setcolor(BLACK);
    setbkcolor(YELLOW);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    char scoreStr[10];
    sprintf(scoreStr, "%d", score);
    outtextxy(1430, 30, scoreStr);
}
