/****************************************
 ���α׷��� ���� 13���� 1���� ����
 2020114658 ������
 **********************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

int main(void)
{
    printf("��ǻ���к� ��ȭ��ǻ������ 2020114658 ������\n\n");

    FILE* fp = NULL;
    char name[SIZE];
    char word[SIZE];
    char line[SIZE];
    int num = 0;

    printf("���� �̸�: ");
    gets(name);

    if ((fp = fopen(name, "r")) == NULL)
    {
        printf("���Ͽ��¿���\n");
        exit(1);
    }

    printf("�˻��� �ܾ�: ");
    gets(word);
    while (!feof(fp))
    {
        num++;
        fgets(line, SIZE, fp);
        if (strstr(line, word) != NULL)
        {
            printf("[output]\n");
            printf("%s\n",name);
            printf("line %d\n",num);
            printf("%s\n",line);
        }
    }
    fclose(fp);
    return 0;
}
