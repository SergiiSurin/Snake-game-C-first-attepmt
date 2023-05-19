#include <list>
#include "Point.h"
#include "HorizontalLine.h"

HorizontalLine::HorizontalLine(int xLeft, int xRight, int y, char sym)
{
    pList = new std::list<Point>();
    for (int x = xLeft; x <= xRight; x++)
    {
        Point p(x, y, sym);
        pList->push_back(p);
    }
}
HorizontalLine::~HorizontalLine()
{
    delete pList;
}
