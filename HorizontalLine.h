#include "Figure.h"

#ifndef HORIZONTALLINE_H
#define HORIZONTALLINE_H

class HorizontalLine : public Figure
{
public:
    HorizontalLine(int xLeft, int xRight, int y, char sym);
    ~HorizontalLine();
};

#endif
