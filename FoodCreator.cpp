#include "FoodCreator.h"

int FoodCreator::Random(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); // используем static, так как это значение нужно вычислить единожды
	// Равномерно распределяем вычисление значения из нашего диапазона
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

Point FoodCreator::createFood()
{
	int x = Random(2, m_mapWidth - 3);
	int y = Random(2, m_mapHeight - 2);
	return Point(x, y, m_sym);
}