#include <stdio.h>

int main()
{
	int A = 4;// Задаем точки
	int B = 8;
	int C = 12;
	int AC = C - A; // Вычисляем длину отрезков
	int BC = C - B;
	int sum = AC + BC; // Складываем длины отрезков
	printf("AC = %d\n", AC); // Выводим полученные данные
	printf("BC = %d\n", BC);
	printf("sum is %d", sum);
}
