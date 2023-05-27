#pragma once

#include "Point.h"

class FoodCreator
{
private:
	int m_mapWidth;
	int m_mapHeight;
	char m_sym;
		
public:
	FoodCreator(int mapWidth, int mapHeight, char sym):
		m_mapWidth(mapWidth), m_mapHeight(mapHeight), m_sym(sym) {}
	Point createFood();
	
	int Random(int min, int max);
	
};

