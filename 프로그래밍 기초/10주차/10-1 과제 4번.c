/*
 ���α׷��� ���� 10���� 1���� ����
 2020114658 ������
 */


#include <stdio.h>
#include <stdarg.h> 

double vasum(char*, ...);

int main()
{
    printf("��ǻ���к� ��ȭ��ǻ������ 2020114658 ������\n\n");

    printf("%f\n", vasum("dfdf", 3, 20.75412, 51, 21.9012));
    return 0;
}

double vasum(char* type, ...)
{
    va_list argp;

    int i = 0;
    double total = 0;
    va_start(argp, type);
    while (type[i] != '\0')
    {
        switch (type[i])
        {
        case 'd':
            total += va_arg(argp, int);
            break;
        case 'f':
            total += va_arg(argp, double);
            break;
        default:
            break;
        }
        i++;
    }
    va_end(argp);
    return total;
}