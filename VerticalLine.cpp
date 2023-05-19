#include <list>
#include "Point.h"
#include "VerticalLine.h"


VerticalLine::VerticalLine(int x, int yUp, int yDown, char sym)
{
    pList = new std::list<Point>();
    for (int y = yUp; y <= yDown; y++)
    {
        Point p(x, y, sym);
        pList->push_back(p);
    }
}
VerticalLine::~VerticalLine()
{
    delete pList;
}
