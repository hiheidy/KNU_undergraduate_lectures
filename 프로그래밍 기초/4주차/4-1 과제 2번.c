/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
4���� 1���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//2��


int main()
{
	int month;

	printf("��(month)�� �Է��ϼ���: ");
	scanf_s("%d", &month);

	if (month == 1 | month == 2 | month == 3)
		printf("1��б��Դϴ�.");
	else if (month == 4 | month == 5 | month == 6)
		printf("2��б��Դϴ�.");
	else if (month == 7 | month == 8 | month == 9)
		printf("3��б��Դϴ�.");
	else 
		printf("4��б��Դϴ�.");

	return 0;
}
