/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
4���� 1���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//1��

int main()
{
	double x, y;
	printf("�� �Ǽ� �Է�: ");
	scanf_s("%lf %lf", &x,&y);

	int select;
	printf("�������� ��ȣ���� 1<+>, 2<->, 3<*>, 4</>: ");
	scanf_s("%d", &select);

	switch (select) {

	case 1:
		printf("%.2lf + %.2lf = %.2lf", x, y, x+y);
		break;

	case 2:
		printf("%.2lf - %.2lf = %.2lf", x, y, x - y);
		break;

	case 3:
		printf("%.2lf * %.2lf = %.2lf", x, y, x * y);
		break;

	case 4:
		printf("%.2lf / %.2lf = %lf", x, y, x / y);
		break;

	default:
		printf("�߸��� �Է��Դϴ�.");
	}

	return 0;
}
