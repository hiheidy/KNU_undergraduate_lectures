/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
6���� 2���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//2��

int add(int a, int b);
int multi(int a, int b);

int main()
{
	printf("2020114658 ������\n");

	int i, num1, num2;

	for (i = 0;;)
	{
		printf("�� ������ �Է��ϼ���: ");
		scanf_s("%d %d", &num1, &num2);
		printf("��: %d, ��: %d\n\n", add(num1, num2), multi(num1, num2));
	}
	

	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int multi(int a, int b)
{
	return a * b;
}