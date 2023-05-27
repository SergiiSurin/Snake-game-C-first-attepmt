#include "Snake.h"

Snake::Snake(Point tail, int length, Direction m_direction)
{
	direction = m_direction;
	Point p;
	p.copyFrom(tail);

	for (int i = 0; i < length; ++i)
	{
		p.move(1, direction);
		pList.push_back(p);
	}
}
void Snake::move()
{
	Point tail{ pList.front() };
	pList.pop_front();
	Point head = getNextPoint();
	pList.push_back(head);

	tail.clear();
	head.print_point();

}
Point Snake::getNextPoint()
{
	Point head{ pList.back() };
	Point nextPoint = head;
	nextPoint.move(1, direction);
	return nextPoint;
}
void Snake::handleKey(int key)
{
	switch (key)
	{
	case KEY_UP:
		direction = UP; //key up
		break;
	case KEY_DOWN:
		direction = DOWN;   // key down
		break;
	case KEY_LEFT:
		direction = LEFT;  // key left
		break;
	case KEY_RIGHT:
		direction = RIGHT;  // key right
		break;
	}
}

bool Snake::eat(Point food)
{
	Point head = getNextPoint();
	if (head.isHit(food))
	{
		pList.push_back(head);
		head.print_point();
		return true;
	}
	else
		return false;
}

bool Snake::isHitTail()
{
	Point head = getNextPoint();
	for (auto iter = pList.begin(); iter != pList.end(); ++iter)
	{
		if (head.isHit(*iter))
			return true;
	}
	return false;
}