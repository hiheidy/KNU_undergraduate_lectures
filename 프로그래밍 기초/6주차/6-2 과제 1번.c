/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
6���� 2���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//1��


int sum(int *ary, int SIZE);

int main()
{
	printf("2020114658 ������\n");
	int array[] = { 1,2,3,4,5 };
	int* array1 = array;
	int aryLength = sizeof(array) / sizeof(int);
	printf("%d", sum(array1,aryLength));

	return 0;
}

int sum(int *ary, int SIZE)
{
	int i,result=0;
	for (i = 0; i < SIZE; i++)
	{
		result = result + *(ary+i);
		
	}

	return result;
}