/*
 ���α׷��� ���� 10���� 1���� ����
 2020114658 ������
 */

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

 //1��

void print(int* pi, int size);
void increment(int* pi, int size, int inc);

int main()
{
    int data[] = { 3,21,35,57,24,82,8 };
    int inc;

    printf("��ǻ���к� ��ȭ��ǻ������ 2020114658 ������\n\n");
    print(data, sizeof(data) / sizeof(int));
    printf("�迭�� �� ���ҿ� ���� ����� �Է��ϼ��� -> ");
    scanf_s("%d", &inc);

    increment(data, sizeof(data) / sizeof(int), inc);
    print(data, sizeof(data) / sizeof(int));

    return 0;
}

void print(int* pi, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%3d", *(pi + i));
    }
    printf("\n");

}

void increment(int* pi, int size, int inc)
{
    for (int i = 0; i < size; i++)
    {
        *(pi + i) += inc;
    }
}