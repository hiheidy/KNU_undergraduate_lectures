/*********************
��ǻ���к� ��ȭ��ǻ������
2020114658 ������
9���� 1���� ����
**********************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//2��

struct person {
	char name[20];
	char number[20];
	char address[50];
};

int main()
{
	printf("��ǻ���к� ��ȭ��ǻ������ 2020114658 ������\n\n");
	struct person p1 = { "ȫ�浿","011-1111-1111","����� ���α� ��ô��" };
	struct person p2 = { "����ȣ","017-3245-3278","����� ������ ���" };
	struct person p3 = { "����ȣ","011-2222-2456","��⵵ �Ⱦ�� ��굿" };


	printf("�̸�	��ȭ��ȣ		�ּ�\n\n");
	printf("%s	%s		%s\n", p1.name, p1.number, p1.address);
	printf("%s	%s		%s\n", p2.name, p2.number, p2.address);
	printf("%s	%s		%s", p3.name, p3.number, p3.address);

	return 0;
}
