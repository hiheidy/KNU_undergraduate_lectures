/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
4���� 2���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//3��

#define MAX 10000

int main()
{
	int sum = 0; 
	int n = 1;

	while (sum <= MAX)
	{
		if ((sum + n) > MAX)
		{
			printf("���� ū ��: %d, �� ���� n��: %d", sum, n);
		}
		sum = sum + n;
		n++;
		
	}

	return 0;
}