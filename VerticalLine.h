#include "Figure.h"
#include <list>
#include "Point.h"

#ifndef VERTICALLINE_H
#define VERTICALLINE_H

class VerticalLine: public Figure
{
public:
    VerticalLine(int x, int yUp, int yDown, char sym)
    {
        for (int y = yUp; y <= yDown; ++y)
        {
            pList.push_back(Point{ x, y, sym });
        }
    }
    
};
#endif

