/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
6���� 1���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//1��

int main()
{
	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int(*ptr)[4] = arr;

	int size1 = sizeof(arr) / sizeof(arr[0]);    //3
	int size2 = sizeof(arr[0]) / sizeof(arr[0][0]);		//4
	int i, j;

	/* ���������� �̿� */
	


	printf("ù��° ���: ���������� �̿�\n\n");
	for (i = 0; i < size1; i++)
	{
		for (j = 0; j < size2; j++)
		{
			printf("%5d",*(*(ptr+i)+j));
		}
		printf("\n");

	}
	printf("\n");


	/* ptr[i] �̿� */

	printf("�ι�° ���: *ptr[i] �̿�\n\n");
	for (i = 0 ; i < size1 ; i++)
	{
		for (j = 0; j < size2; j++)
		{
			printf("%5d",*(ptr[i]+j));
		}
		printf("\n");

	}


	
	return 0;
}


