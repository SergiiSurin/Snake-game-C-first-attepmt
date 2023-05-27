// Snake.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Point.h"
// #include "HorizontalLine.h"
// #include "VerticalLine.h"
#include "Snake.h"
#include <windows.h>
#include <iostream>
#include "Direction.h"
//#include "Timer.h"
#include <conio.h>
#include "FoodCreator.h"
#include "Walls.h"



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

    srand(static_cast<unsigned int>(time(0))); // используем системные часы в качестве стартового значения
    rand(); // пользователям Visual Studio: делаем сброс первого случайного числа

    //double time;
    //Timer t;
    COORD position = { 80, 25 };
    SetWindowSize(position);

    Walls walls(80, 25);
    walls.draw();

    Point p{ 4,5,'*' };
    Snake snake{ p, 4, RIGHT };
    snake.draw();
    // time = t.elapsed();

    FoodCreator foodCreator(80, 25, '$');
    Point food = foodCreator.createFood();
    food.print_point();

    int key = 0;

    while (1)
    {
        if (walls.isHit(snake) || snake.isHitTail())
        {
            break;
        }
        if (snake.eat(food))
        {
            food = foodCreator.createFood();
            food.print_point();
        }
        else
        {
            snake.move();
        }
        Sleep(150);

        if (_kbhit())
        { 
            key = _getch();
            snake.handleKey(key);
        }
        
    }
    // std::cout << "Time elapsed: " << time << '\n';
          
    return 0;

}

