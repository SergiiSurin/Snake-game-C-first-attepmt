#include "Figure.h"

void Figure::draw() const
{
    for (auto& point : pList)
    {
        point.print_point();
    }
}

bool Figure::isHit(Figure figure)
{
    for (auto& p : pList)
    {
        if (figure.isHit(p))
            return true;
    }
    return false;
}

bool Figure::isHit(Point point)
{
    for (auto& p : pList)
    {
        if (p.isHit(point))
            return true;
    }
    return false;
}