/*********************
��ǻ���к� ��ȭ��ǻ������
2020114658 ������
9���� 1���� ����
**********************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//1��

struct fraction {
	int numerator;
	int denominator;
};

int main()
{
	printf("��ǻ���к� ��ȭ��ǻ������ 2020114658 ������\n\n");
	struct fraction f1 = { 4,5 };
	struct fraction f2 = { 3,7 };
	struct fraction res = { f1.numerator*f2.numerator, f1.denominator*f2.denominator};

	printf("[output]\n");
	printf("%d/%d * %d/%d = %d/%d",f1.numerator,f1.denominator,f2.numerator,f2.denominator,res.numerator,res.denominator);

	return 0;

}