/*********************
��ǻ���к� ��ȭ��ǻ������
2020114658 ������
7���� 1���� ����
**********************/

#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

//2��

int main()
{
	printf("��ǻ���к� ��ȭ��ǻ������ 2020114658 ������\n\n");

	char c;
	printf("���ڿ��� �Է��ϼ���: ");

	while (scanf_s("%c", &c) != EOF)
	{
		if (c != ' ')
			printf("%c", c);
	}
	return 0;

}