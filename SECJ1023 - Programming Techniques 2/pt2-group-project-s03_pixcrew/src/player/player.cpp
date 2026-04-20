#include <graphics.h>
#include "player.hpp"
#include "../point/point.hpp"
#include "../score/score.hpp"
#include "../food/food.hpp"

Player::Player() {}

Player::Player(int _x, int _y, int s): p(_x, _y), size(s) { sc = new Score();}

void Player::move(){
    p.setX(p.getX()+dx);
}

void Player::setHorizontalMove(int _dx){
    dx = _dx;
}

Point Player::getLocation() const{
    return p;
}

void Player::setScVec(int i){
    scVec = i;
} 
   
void Player::gotHit(){
    
    sc->incrementScore(scVec);
}

// Draw player
void Player::drawPlayer(){
    int x = p.getX();
    int y = p.getY();
    // draw ears
    setcolor(RGB(97, 94, 133));
    setfillstyle(SOLID_FILL, COLOR(235,197,167));
    int ear1[] = {x - 20, y - 50, x - 83, y - 79, x - 85, y - 10, x - 20, y - 50};
    int ear2[] = {x + 20, y - 50, x + 83, y - 79, x + 85, y - 10, x + 20, y - 50};
    drawpoly(4, ear1);
    fillpoly(4, ear1);
    drawpoly(4, ear2);
    fillpoly(4, ear2);

    // draw face
    setcolor(RGB(97, 94, 133));
    setfillstyle(SOLID_FILL, COLOR(235,197,167));
    fillellipse(x, y, size, size-30);

    // draw eyes
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x - 30, y - 20, 15, 15);
    fillellipse(x + 30, y - 20, 15, 15);

    // draw pupil
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(x-25, y-25, 5, 5);
    fillellipse(x+35, y-25, 5, 5);

    // draw nose
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    int nose[] = {x-10, y+5, x+10, y+5, x, y+15, x-10, y+5};
    drawpoly(4, nose);
    fillpoly(4, nose);

    // draw misai
    setcolor(BLACK);
    line(x-75, y, x-32, y+17);
    line(x-75, y+25, x-32, y+17);
    line(x+75, y, x+32, y+17);
    line(x+75, y+25, x+32, y+17);
}


// Undraw Player
void Player::undrawPlayer(){
    int x = p.getX();
    int y = p.getY();
    // undraw face
    setcolor(RGB(144, 180, 222));
    setfillstyle(SOLID_FILL, RGB(144, 180, 222));
    fillellipse(x, y, size, size);

    // undraw eyes
    fillellipse(x - 30, y - 20, 15, 15);
    fillellipse(x + 30, y - 20, 15, 15);

    // undraw pupils
    fillellipse(x-25, y-25, 5, 5);
    fillellipse(x+35, y-25, 5, 5);

    // undraw nose
    int nose[] = {x-10, y+10, x+10, y+10, x, y+20, x-10, y+10};
    drawpoly(4, nose);
    fillpoly(4, nose);

    // undraw ears
    int ear1[] = {x - 20, y - 50, x - 83, y - 79, x - 85, y - 10, x - 20, y - 50};
    int ear2[] = {x + 20, y - 50, x + 83, y - 79, x + 85, y - 10, x + 20, y - 50};
    drawpoly(4, ear1);
    fillpoly(4, ear1);
    drawpoly(4, ear2);
    fillpoly(4, ear2);

    // undraw misai
    line(x-70, y+5, x-27, y+22);
    line(x-70, y+30, x-27, y+22);
    line(x+70, y+5, x+27, y+22);
    line(x+70, y+30, x+27, y+22);
}

//f`
//void Player::incrementScore(int value) {incrementScore(value);}//{ playerScore.incrementScore(value); }

int Player::getPlayerScore() const {return sc->getScore();}//{ return playerScore.getScore(); }
// h tukar getScore -> getPlayerScore()

//void Player::printScore() const {printScore();}//{ playerScore.printScore(); }