/****************************************
 ���α׷��� ���� 11���� 1���� ����
 2020114658 ������
 **********************************/

//1��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int len;
	char* str;

	printf("��ȭ��ǻ������ 2020114658 ������\n\n");
	printf("�Է��� �������� ������ �Է� >> ");
	scanf("%d", &len); // 11
	str = (char*)malloc(sizeof(char) * len + 1);
	printf("11���� ������ �Է� >> ");
	scanf("%s", str); // objective-C    o b j e c t i v e - C 0
	printf("%s\n", str);
	free(str);
	return 0;
}