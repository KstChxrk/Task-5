#include <stdio.h>
#include <math.h>

int main()
{
	float x1 = 2;// ����������� ������ ����������
	float x2 = 2;
	float y1 = 1;
	float y2 = 4;
	float L = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); // �� ������� �������� ��������� ���������� ����� �������
	printf("%f", L);// ������� �����
	return 0;
}