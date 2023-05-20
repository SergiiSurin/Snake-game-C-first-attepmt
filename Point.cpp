#include "Point.h"

void Point::gotoxy() const
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = { short(m_x), short(m_y) };

    SetConsoleCursorPosition(hStdout, position);
}
void Point::copyFrom(const Point& b)
{
    // Мы имеем прямой доступ к закрытым членам объекта b
    m_x = b.m_x;
    m_y = b.m_y;
    m_sym = b.m_sym;
}

void Point::move(int offset, Direction direction)
{
    switch (direction)
    {
    case RIGHT: {m_x += offset; break; }
    case LEFT: {m_x -= offset; break; }
    case UP: {m_y -= offset; break; }
    case DOWN: {m_y += offset; break; }
    default: break;
    }
}

void Point::print_point() const
{
    gotoxy();
    std::cout << m_sym;
}

void Point::clear()
{
    gotoxy();
    std::cout << ' ';
}
