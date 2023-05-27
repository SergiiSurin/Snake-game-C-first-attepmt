#pragma once

#include <list>
#include "Figure.h"
#include "HorizontalLine.h"
#include "VerticalLine.h"

class Walls
{
private:
	std::list<Figure> wallList;
public:
    Walls(int mapWidth, int mapHeight)
    {
        HorizontalLine upLine{ 0, mapWidth-2, 0, '+' };
        HorizontalLine downLine{ 0, mapWidth - 2, mapHeight-1, '+' };
        VerticalLine leftLine{ 0, 0, mapHeight - 1, '+' };
        VerticalLine rightLine{ mapWidth - 2, 0, mapHeight - 1, '+' };

        wallList.push_back(upLine);
        wallList.push_back(downLine);
        wallList.push_back(leftLine);
        wallList.push_back(rightLine);
    }

    bool isHit(Figure figure);
    void draw();
};

