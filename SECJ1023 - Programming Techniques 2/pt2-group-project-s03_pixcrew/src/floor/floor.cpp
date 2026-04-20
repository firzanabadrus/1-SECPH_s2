#include "floor.hpp"








int Floor::getLives() const{
    return lives;
}

void Floor::drawHeart(int x, int y){
    //upper part
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    fillellipse(x-6, y-4, 10, 10);
    fillellipse(x+11, y-4, 10, 10);

    int p[] = {x - 16, y - 3, x + 20, y - 3, x + 3, y + 20, x - 16, y - 3};
    fillpoly(4, p);
}

void Floor::undrawHeart(int x, int y){
    //upper part
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x-6, y-4, 10, 10);
    fillellipse(x+11, y-4, 10, 10);

    int p[] = {x - 16, y - 3, x + 20, y - 3, x + 3, y + 20, x - 16, y - 3};
    fillpoly(4, p);
}

void Floor::drawLives() {
    // setLives(lives);
    // setcolor(RED);
    // setfillstyle(SOLID_FILL, RED);

    for (int i = 1; i <= lives; ++i) {
        drawHeart(50, 20 + i * 40);
    }
}

void Floor::undrawLives() {
    // setcolor(BLACK);
    // setfillstyle(SOLID_FILL, BLACK);

    for (int i = 1; i <= 3; ++i) {
        undrawHeart(50, 20 + i * 40);
    }
}










// void Floor::drawLivesBox(int s){
//     setcolor(BLACK);
//     setbkcolor(RGB(144, 180, 222));
//     settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
//     char livesStr[10];
//     sprintf(livesStr, "%d", s);
//     outtextxy(100, 30, livesStr);
// }