#ifndef SCORE_H
#define SCORE_H
#include <graphics.h>

using namespace std;

class Score{
    protected:
        int score;

    public:
        Score();
        void setScore(int s);
        int getScore() const;
        void incrementScore(int value);
        void drawScoreBox(int score);

};

#endif