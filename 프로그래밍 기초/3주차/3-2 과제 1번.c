/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
3���� 2���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//1��

int main()
{
	double cm;

	printf("��Ƽ����(cm)�� �Ҽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &cm);

	double feet = cm * 30.48;

	printf("%.3lf feet �Դϴ�.",feet);

	return 0;
}