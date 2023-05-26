#pragma once

#include "Point.h"

class FoodCreator
{
private:
	int mapWidth;
	int mapHeight;
	char sym;
		
public:
	FoodCreator(int mapWidth, int mapHeight, char sym)
	{
		this->mapWidth = mapWidth;
		this->mapHeight = mapHeight;
		this->sym = sym;
	}
	Point createFood();
	
	int Random(int min, int max);
	
};

