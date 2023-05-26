#include <iostream>
#include <windows.h>
#include "Direction.h"

#ifndef POINT_H
#define POINT_H

class Point
{
private:
    int m_x = 0;
    int m_y = 0;
    char m_sym = ' ';
    
public:
    Point() {}
    Point(int x, int y, char sym) : m_x(x), m_y(y), m_sym(sym) {}

    void gotoxy() const;
    void copyFrom(const Point& b);
    void move(int offset, Direction direction);
    void print_point() const;
    void clear();
    bool isHit(Point p);
    void eating(const Point& b);
};
#endif

