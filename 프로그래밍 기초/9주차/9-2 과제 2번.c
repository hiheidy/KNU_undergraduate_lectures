/*********************
��ǻ���к� ��ȭ��ǻ������
2020114658 ������
9���� 2���� ����
**********************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//2��

struct person {
	char name[10];
	char phone[20];
	char address[50];
}person;

struct employee {
	struct person info;
	char number[20];
	int monthpay;
	double incentive;
	double yearpay;
};

int main()
{
	struct employee p[10] = { NULL, };
	char res;
	int i = 0, j = 0;

	printf("\n��ǻ���к� ��ȭ��ǻ������ 2020114658 ������\n\n");
	printf("[input]\n");

	do
	{
		printf("���, �̸�, ��ȭ��ȣ, �ּ� �Է�: ");
		scanf_s("%s %s %s %[^\n]", p[j].number,10, p[j].info.name,20, p[j].info.phone,20,p[j].info.address,50);
		printf("����, �μ�Ƽ�� �Է�: ");
		scanf_s("%d %lf", &p[j].monthpay, &p[j].incentive);
		p[j].yearpay = p[j].monthpay * (12 + p[j].incentive);

		printf("��� �Է��Ͻðڽ��ϱ�?");
		scanf_s("\n%c", &res, 2);
		j++;
	} while (res == 'y');

	printf("[output]\n");
	printf("\n  �� ��   �� ��		�� ȭ �� ȣ		�� ��		 �� ��	        �μ�Ƽ��	    �� ��   \n\n");
	for (i = 0; (i < j); i++)
	{
		printf("%s  %s       %s     %s    %d          %d             %.1lf\n", p[i].number, p[i].info.name, p[i].info.phone, p[i].info.address, p[i].monthpay, (int)(p[i].incentive * 100), p[i].yearpay);
	}

	return 0;

}