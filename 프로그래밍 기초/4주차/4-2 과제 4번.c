/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
4���� 2���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//4��


int main()
{
	int num;
	int digit;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	while (num!=0)
	{
		digit = num % 10;
		printf("%d", digit);
		num = num / 10;

	}
	return 0;
	}