/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
5���� 1���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//4��


int main()
{
	double num1, num2;
	
	printf("�� �Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf %lf", &num1, &num2);

	double* ptrnum1 = &num1, * ptrnum2 = &num2;

	printf("�� �Ǽ��� ����: %.2lf+%.2lf=%.2lf\n", *ptrnum1, *ptrnum2, *ptrnum1 + *ptrnum2);
	printf("�� �Ǽ��� ����: %.2lf-%.2lf=%.2lf\n", *ptrnum1, *ptrnum2, *ptrnum1 - *ptrnum2);
	printf("�� �Ǽ��� ����: %.2lf*%.2lf=%.3lf\n", *ptrnum1, *ptrnum2, *ptrnum1**ptrnum2);
	printf("�� �Ǽ��� ������: %.2lf/%.2lf=%.3lf", *ptrnum1, *ptrnum2, *ptrnum1 / *ptrnum2);

	return 0;
}