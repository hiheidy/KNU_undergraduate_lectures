/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
4���� 1���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//3��

int main()
{
	double x, y;
	printf("�� �Ǽ� �Է�: ");
	scanf_s("%lf %lf", &x, &y);

	if ((x>0) & (y>0))
		printf("%.3lf + %.3lf = %.3lf", x, y, x + y);
	else if ((x>0) & (y<=0))
		printf("%.3lf - (%.3lf) = %.3lf", x, y, x - y);
	else if ((x<=0) & (y>0))
		printf("-(%.3lf) + %.3lf = %.2lf", x, y, -x + y);
	else
		printf("-(%.3lf) - (%.3lf) = %.2lf", x, y, -x - y);

	return 0;
}