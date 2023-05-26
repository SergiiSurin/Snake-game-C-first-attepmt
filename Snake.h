#include "Figure.h"
#include "Direction.h"
#include "Point.h"
#include <algorithm>
#include <list>
//#include "FoodCreator.h"

#ifndef SNAKE_H
#define SNAKE_H

class Snake: public Figure
{
	Direction direction;
public:
	
	Snake(Point tail, int length, Direction m_direction);
	void move();
	Point getNextPoint();
	void handleKey(int Key);
	bool eat(Point food);
};
#endif
