/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
4���� 2���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//1��

#define MAX 5


int main()
{
	for (int i = 1 ; i <= MAX ; i++)
	{
		for (int m = MAX; m >= i; m--)
		{
			printf("%d", m);
		}
		printf("\n");

	}

	return 0;
}

