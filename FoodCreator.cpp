#include "FoodCreator.h"

int FoodCreator::Random(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); // ���������� static, ��� ��� ��� �������� ����� ��������� ��������
	// ���������� ������������ ���������� �������� �� ������ ���������
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

Point FoodCreator::createFood()
{
	int x = Random(2, mapWidth - 2);
	int y = Random(2, mapHeight - 2);
	return Point(x, y, sym);
}