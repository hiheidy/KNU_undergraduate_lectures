/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
5���� 1���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//2��


int main()
{
	int data1 = 10, data2 = 20;
	int sum;
	int* pd1 = &data1, * pd2 = &data2;

	*pd1 = 100;
	*pd2 = 200;
	sum = *pd1 + *pd2;

	printf("%d", sum);

	return 0;
}