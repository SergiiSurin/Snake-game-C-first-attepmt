#include "Figure.h"
#include <list>
#include "Point.h"

#ifndef HORIZONTALLINE_H
#define HORIZONTALLINE_H

class HorizontalLine: public Figure
{
public:
    HorizontalLine(int xLeft, int xRight, int y, char sym)
    {
       for (int x = xLeft; x <= xRight; ++x)
        {
            pList.push_back(Point {x, y, sym});
        }
    }
};

#endif
