/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
3���� 2���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//3��


int main()
{
	int x, y;
	printf("�� ���� �Է��Ͻÿ�: ");
	scanf_s("%d%d", &x, &y);
	int max = x > y ? x : y;
	int min = x > y ? y : x;

	printf("��: %d\n", max/min);
	printf("������: %d", max % min);

	return 0;
}