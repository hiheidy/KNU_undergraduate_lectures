/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
3���� 1���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//1��

#define PI 3.141592

int main()
{
    double radius;
    scanf_s("%lf", &radius);
    double area = radius * radius * PI;
    double cir = 2 * PI * radius;
    printf("���� ������: %lf\n", radius);
    printf("���� ����: %lf\n", area);
    printf("���� �ѷ�: %lf", cir);

    return 0;

}
