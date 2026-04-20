#ifndef POINT_H
#define POINT_H

class Point
{
    protected:
        int x, y;

    public:
        Point();
        Point(int _x, int _y);
        void setX(int _x);
        void setY(int _y);
        int getX() const;
        int getY() const;

};

#endif