/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
3���� 2���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//4��


int main()
{
	int x, y, z;

	printf("�� ���� �Է��Ͻÿ�: ");
	scanf_s("%d%d%d", &x, &y, &z);

	int max = x > y ? (x > z ? x : z) : (y > z ? y : z);

	printf("���� ū ���� %d�Դϴ�.", max);

	return 0;
}
