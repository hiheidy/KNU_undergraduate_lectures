/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
6���� 1���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//4��

int main()
{
	int x1[][3] = { 16,79,78,35,57,28,43,68,76,56,78,98 };
	int x2[][3] = { 78,35,99,85,82,34,58,69,29,34,59,35 };
	int plus[4][3] = { 0 };
	int minus[4][3] = { 0 };

	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			plus[i][j] = x1[i][j] + x2[i][j];
			minus[i][j] = x1[i][j] > x2[i][j] ? x1[i][j] - x2[i][j] : x2[i][j] - x1[i][j];

		}
	}
	printf(" �� ���\t\t �� ���\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d", plus[i][j]);
		}
		printf("\t\t");
		for (j = 0; j < 3; j++)
		{
			printf("%5d", minus[i][j]);
		}
		printf("\n");
	}
}