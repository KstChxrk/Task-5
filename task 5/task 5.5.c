#include <stdio.h>
#include <math.h>

int main()
{
	float x1 = 6; // ������ ���������� �����
	float x2 = 2;
	float x3 = 4;
	float y1 = 3;
	float y2 = 9;
	float y3 = 5;
	float a = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2)); // �� ������� �������� ��������� ���������� ����� �������
	float b = sqrt(pow((x1 - x3),2) + pow((y3 - y1),2));
	float c = sqrt(pow((x2 - x3),2) + pow((y3 - y2),2));
	float p = a + b + c; // ��������� ��������
	float p2 = (a + b + c) / 2; // ��������� ������������ ��� ���������� �������
	float s = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c)); // ��������� �������
	printf("%f\n", p);// ������� ���������� ������
	printf("%f", s);
	return 0;
}
