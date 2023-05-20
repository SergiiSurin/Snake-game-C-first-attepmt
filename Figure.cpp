#include "Figure.h"

void Figure::draw() const
{
    for (auto& point : pList)
    {
        point.print_point();
    }
}