#include <stdio.h>

int main()
{
	int x1 = 6; // Задаем координаты точек
	int x2 = 7;
	int y1 = 5;
	int y2 = 18;
	int a = x2 - x1; // Вычисляем длины сторон
	int b = y2 - y1;
	int p = 2 * a + 2 * b; // Вычисляем периметр
	int s = a * b; // Вычисляем площадь
	printf("%d\n", p); // Выводим полученные данные
	printf("%d", s);
	return 0;
}
