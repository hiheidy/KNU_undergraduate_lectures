/*
 ���α׷��� ���� 10���� 1���� ����
 2020114658 ������
 */

#include <stdio.h>
#define _CRT_NO_WARNINGS

 //2��


#define rows 2
#define cols 3

void plus(double resultc_r[][cols], double matrixa_a[][cols], double matrixb_b[][cols]);
void minus(double resultc_r[][cols], double matrixa_a[][cols], double matrixb_b[][cols]);
void display(double resultc_r[][cols], int m);

int main()
{
    double matrixa_a[][cols] = { {4.2,4.3,3.8},{3.7,1.5,0.7} };
    double matrixb_b[][cols] = { {5.3,2.1,1.8},{3.2,1.4,2.9} };
    double resultc_r[rows][cols] = { 0 };

    printf("��ǻ���к� ��ȭ��ǻ������ 2020114658 ������\n\n");

    display(matrixa_a, rows);
    display(matrixb_b, rows); 

    printf("������ �� �� ����� ���ϱ� ����Դϴ�.\n\n");
    plus(resultc_r, matrixa_a, matrixb_b);
    display(resultc_r, rows);

    printf("������ �� �� ����� ���� ����Դϴ�.\n\n");
    minus(resultc_r, matrixa_a, matrixb_b);
    display(resultc_r, rows);


    return 0;

}


void display(double resultc_r[][cols], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%5.1f ", resultc_r[i][j]);
        printf("\n");
    }
    printf("\n");
}

void plus(double resultc_r[][cols], double matrixa_a[][cols], double matrixb_b[][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            resultc_r[i][j] = matrixa_a[i][j] + matrixb_b[i][j];
    }
}

void minus(double resultc_r[][cols], double matrixa_a[][cols], double matrixb_b[][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            resultc_r[i][j] = matrixa_a[i][j] - matrixb_b[i][j];
    }
}