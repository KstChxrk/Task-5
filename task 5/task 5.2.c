#include <stdio.h>

int main()
{
	int A = 4;// ������ �����
	int B = 8;
	int C = 12;
	int AC = C - A; // ��������� ����� ��������
	int BC = C - B;
	int sum = AC + BC; // ���������� ����� ��������
	printf("AC = %d\n", AC); // ������� ���������� ������
	printf("BC = %d\n", BC);
	printf("sum is %d", sum);
}
