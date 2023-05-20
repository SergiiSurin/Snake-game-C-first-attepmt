// Snake.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Point.h"
#include "HorizontalLine.h"
#include "VerticalLine.h"
#include "Snake.h"
#include <windows.h>
#include <iostream>
#include "Direction.h"
#include "Timer.h"



void SetWindowSize(COORD newsize)//newaize recive the number of characters been showed on window
{
    CONSOLE_SCREEN_BUFFER_INFOEX consolesize;

    consolesize.cbSize = sizeof(consolesize);

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    GetConsoleScreenBufferInfoEx(hConsole, &consolesize);

    COORD c;
    c.X = newsize.X;
    c.Y = newsize.Y;
    consolesize.dwSize = c;
    consolesize.dwMaximumWindowSize = c; //change the window max size

    consolesize.srWindow.Left = 0;
    consolesize.srWindow.Right = c.X;
    consolesize.srWindow.Top = 0;
    consolesize.srWindow.Bottom = c.Y;
    //srWindow, c and dwMaximumWindowSize are the same
    //here i don't use pixels. for that i must get the current font size and then calculate the number of characters

    SetConsoleScreenBufferInfoEx(hConsole, &consolesize);
    SetConsoleWindowInfo(hConsole, FALSE, &consolesize.srWindow);
}

int main()
{
    double time;
    Timer t;
    COORD position = { 180, 55 };
    SetWindowSize(position);

    HorizontalLine upline{ 0, 178, 0, '+' };
    HorizontalLine downline{ 0, 178, 54, '+' };
    VerticalLine leftLine{ 0, 0, 54, '+' };
    VerticalLine rightLine{178, 0, 54, '+'};
    
    upline.print_line();
    downline.print_line();
    leftLine.print_line();
    rightLine.print_line();

    Point p{ 4,5,'*' };
    Snake snake{ p, 6, RIGHT };
    snake.print_line();
    snake.move();

    time = t.elapsed();
    
    Sleep(300);
    snake.move();
    Sleep(300);
    snake.move();
    Sleep(300);
    snake.move();
    Sleep(300);
    snake.move();
    Sleep(300);
    snake.move();
    Sleep(300);
    snake.move();
    Sleep(300);
    snake.move();
    Sleep(300);
    snake.move();
    Sleep(300);
    snake.move();
    Sleep(300);
    snake.move();
    Sleep(300);
    snake.move();
    Sleep(300);
    snake.move();
    Sleep(300);
    snake.move();
    Sleep(300);
    snake.move();
    Sleep(300);
    snake.move();
    Sleep(300);
    
    std::cout << "Time elapsed: " << time << '\n';

    std::cin.clear();
    std::cin.ignore(32767, '\n');
    std::cin.get();

    
    return 0;

}

