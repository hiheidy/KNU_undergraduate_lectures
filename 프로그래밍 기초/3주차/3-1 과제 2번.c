/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
3���� 1���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//2��

int main()
{
	double f_degree;
	scanf_s("%lf",&f_degree);
	double c_degree = 5.0 / 9.0 * (f_degree - 32.0);
	printf("���� �µ�: %.4lf", c_degree);

	return 0;
}