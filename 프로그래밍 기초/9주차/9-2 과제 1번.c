/*********************
��ǻ���к� ��ȭ��ǻ������
2020114658 ������
9���� 2���� ����
**********************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//1��


typedef struct person {
	char name[20];
	char number[20];
	char address[50];
}person;

int main()
{
	person p[10] = { NULL, };
	char res;
	int i = 0, j = 0;

	printf("\n��ǻ���к� ��ȭ��ǻ������ 2020114658 ������\n\n");
	printf("[input]\n");
	do
	{
		printf("�̸�:");
		scanf_s("\n%s", p[j].name,20);
		printf("��ȭ��ȣ:");
		scanf_s("\n%s", p[j].number,20);
		printf("�ּ�:");
		scanf_s("\n%[^\n]s",p[j].address,50);

		printf("��� �Է��Ͻðڽ��ϱ�?");
		scanf_s("\n%c",&res,2);
		j++;
	} while (res == 'y');

	printf("[output]\n");
	printf("�̸�	��ȭ��ȣ		�ּ�\n\n");
	for (i = 0; (i < sizeof(p) / sizeof(p[0])); i++)
	{
		printf("%s	%s		%s\n", p[i].name, p[i].number, p[i].address);
	}

	return 0;

}