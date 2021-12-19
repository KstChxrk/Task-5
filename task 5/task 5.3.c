#include <stdio.h>

int main()
{
	int A = 5;// Задаем точки
	int B = 8;
	int C = 6;
	int AC = C - A; // Вычисляем длину отрезков
	int BC = B - C;
	int sum = AC * BC; // Умножаем длины отрезков
	printf("sum is %d", sum); // Выводим полученные данные
}
