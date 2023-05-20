#include "Snake.h"

Snake::Snake(Point tail, int length, Direction m_direction)
{
	direction = m_direction;
	Point p;
	p.copyFrom(tail);

	for (int i = 0; i < length; ++i)
	{
		// Point p;
		// p.copyFrom(tail);
		// p.move(i, direction);
		p.move(1, direction);
		pList.push_back(p);
	}
}
void Snake::move()
{
	Point tail{ pList.front() };
	pList.pop_front();
	Point head = GetNextPoint();
	pList.push_back(head);

	tail.clear();
	head.print_point();

}
Point Snake::GetNextPoint()
{
	Point head{ pList.back() };
	Point nextPoint = head;
	nextPoint.move(1, direction);
	return nextPoint;
}
/*Snake::~Snake()
{
	delete pList;
}*/