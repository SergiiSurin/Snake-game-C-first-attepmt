#include "Walls.h"
bool Walls::isHit(Figure figure)
{
    for (auto& wall : wallList)
    { 
        if (wall.isHit(figure))
        {
            return true;
        }
    }
    return false;
}
void Walls::draw()
{
    for (auto& wall : wallList)
    {
        wall.draw();
    }
}