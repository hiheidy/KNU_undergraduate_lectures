/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
4���� 2���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//2��


int main()
{
	int floor;

	printf("�Ƕ�̵� �� �Է�: ");
	scanf_s("%d", &floor);

	int star = 2 * floor - 1;

	for (int i = 1; i <= floor; i++)
	{
		for (int m = 1; m <= (floor - i); m++)
		{
			printf(" ");
		}
		
		for (int s = 1; s <= ((2 * i) - 1); s++)
		{
			printf("*");
		}

		for (int t = 1; t <= (floor - i); t++)
		{
			printf(" ");
		}

		printf("\n");
	}

	return 0;
}