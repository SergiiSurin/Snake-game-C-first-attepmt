#include "Figure.h"

#ifndef VERTICALLINE_H
#define VERTICALLINE_H

class VerticalLine : public Figure
{
public:
    VerticalLine(int x, int yUp, int yDown, char sym);
    ~VerticalLine();
};
#endif

