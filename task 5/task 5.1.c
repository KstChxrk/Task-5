#include <stdio.h>
#include <math.h>

int main()
{
	float x1 = 2;// присваеваем точкам координаты
	float x2 = 2;
	float y1 = 1;
	float y2 = 4;
	float L = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); // По теореме Пифагора вычисляем расстояние между точками
	printf("%f", L);// Выводим длину
	return 0;
}