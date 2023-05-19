#include "Figure.h"
#include "Direction.h"
#include "Point.h"
#include <algorithm>
#include <list>

#ifndef SNAKE_H
#define SNAKE_H

class Snake: public Figure
{
public:
	Direction direction;
	Snake(Point tail, int length, Direction m_direction);
	void move();
	Point GetNextPoint();
	~Snake();
};
#endif
