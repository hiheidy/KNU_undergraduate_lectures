/*********************
��ǻ���к� ��ȭ��ǻ������
2020114658 ������
7���� 1���� ����
**********************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//3��

int main()
{
	printf("��ǻ���к� ��ȭ��ǻ������ 2020114658 ������\n\n");
	char str1[50], str2[50];
	int leng;

	printf("ù ��° ������ �Է��ϼ���: ");
	gets_s(str1, sizeof(str1));
	printf("�� ��° ������ �Է��ϼ���: ");
	gets_s(str2, sizeof(str2));

	strcat(str1, str2);
	printf("%s", str1);

	return 0;

}