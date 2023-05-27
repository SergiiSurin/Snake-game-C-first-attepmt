#include "Point.h"
#include <list>

#ifndef FIGURE_H
#define FIGURE_H

class Figure
{
protected:
    std::list<Point> pList;
public:
    void draw() const;
    bool isHit(Figure figure);
private:
    bool isHit(Point point);

};
#endif
