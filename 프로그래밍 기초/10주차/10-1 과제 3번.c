/*
 ���α׷��� ���� 10���� 1���� ����
 2020114658 ������
 */

#include <stdio.h>
#include <stdarg.h>
#define _CRT_NO_WARNINGS

 //3��

double vafunc(char* type, int count, ...);

int main()
{
    char type;

    printf("��ǻ���к� ��ȭ��ǻ������ 2020114658 ������\n\n");

    printf("��� %.2f\n", vafunc("d", 5, 172, 21, 36, 43, 58));
    printf("��� %.2f\n", vafunc("f", 5, 5.8, 17.3, 2.8, 31.8, 45.9, 5.9));

}


double vafunc(char* type, int count, ...)
{
    va_list argp;
    va_start(argp, count);

    double total = 0;

    if (*type == 'd')
    {
        for (int i = 0; i < count; i++)
        {
            total += va_arg(argp, int);
        }
    }

    if (*type == 'f')
    {
        for (int i = 0; i < count; i++)
        {
            total += va_arg(argp, double);
        }
    }

    va_end(argp);

    return total / count;

}