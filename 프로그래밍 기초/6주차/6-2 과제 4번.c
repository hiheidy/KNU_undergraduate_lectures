/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
6���� 2���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//4��

int result(int n);


int main()
{
	printf("2020114658 ������ \n");

	int number;

	printf("���� ������ �Է��ϼ���: ");
	scanf_s("%d", &number);

	if (number < 10)
		printf("%d\n", number);
	else
		result(number);
	return 0;

}

int result(int n)
{
	if (n<10)
		printf("%d\n", n);
	else
	{
		result(n/10);
		printf("%d\n", n%10);
	}

}