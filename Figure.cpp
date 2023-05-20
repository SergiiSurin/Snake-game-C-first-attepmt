#include "Figure.h"

void Figure::print_line() const
{
    for (auto& point : pList)
    {
        point.print_point();
    }
}