/*********************
��ǻ���к� ��ȭ��ǻ������
2020114658 ������
7���� 1���� ����
**********************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//4��


int main()
{
    printf("��ǻ���к� ��ȭ��ǻ������ 2020114658 ������\n\n");

    char str[100];
    printf("���� ������ �Է��ϼ���: ");
    gets(str);

    for (int i = 0; str[i] != NULL; i++) {
        if (65 <= str[i] && str[i] <= 90) str[i] += 32;
        else if (97 <= str[i] && str[i] <= 122) str[i] -= 32;
    }
    printf("������ �Է��� ���ڿ����� �빮�ڿ� �ҹ��ڸ� �ݴ�� ��ȯ�ϸ�:\n %s", str);
    return 0;
}