#include <graphics.h>
#include "../background/background.hpp"

//constructor
Background::Background(){}

//function to draw a cloud
void Background::drawCloud(int x, int y, int width, int height) 
{
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);

    // Draw main cloud ellipse
    fillellipse(x, y, width, height);
    // (int x, int y, int xradius, int yradius);

    // Draw additional smaller ellipses to make the cloud shape
    fillellipse(x - width / 2, y - height / 2, width / 2, height / 2);
    fillellipse(x + width / 2, y - height / 2, width / 2, height / 2);
    fillellipse(x, y - height, width / 2, height / 2);
}

// Function to draw the background
void Background::drawBackground() 
{
    // Draw clouds at different positions
    drawCloud(200, 130, 70, 40);
    drawCloud(550, 150, 70, 40);
    drawCloud(1050, 100, 70, 40);
    drawCloud(1500, 150, 70, 40);
    drawCloud(1250, 350, 70, 40);
    drawCloud(800, 300, 70, 40);
    drawCloud(275, 350, 70, 40);
    drawCloud(-50, 300, 70, 40);
    
}