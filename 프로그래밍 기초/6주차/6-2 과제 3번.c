/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
6���� 2���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//3��

#include <stdlib.h>
#include <time.h>

#define MAX 100
#define LAST 7

//3��

int chanceCount(count,last);
int result;

int main()
{
	printf("2020114658 ������\n");

	int guess, input,cnt;

	srand((long)time(NULL));
	guess = rand() % MAX + 1;

	printf("1���� %d ���̿��� �� ������ �����Ǿ����ϴ�.\n", MAX);
	printf("�� ������ �����ϱ��? �Է��� ������: ");
	cnt = 0;

	while (scanf_s("%d", &input))
	{
		if (input > guess)
		{
			cnt++;
			chanceCount(cnt, LAST);
			if (result == 1)
				break;
			printf("�Է��� ������ �۽��ϴ�. �ٽ� �Է��ϼ���: ");
		
		}
			
		else if (input < guess)
		{
			cnt++;
			chanceCount(cnt, LAST);
			if (result == 1)
				break;
			printf("�Է��� ������ Ů�ϴ�. �ٽ� �Է��ϼ���: ");
			
		}
			
		else
		{
			puts("�����Դϴ�.");
			break;
		}
	}
	return 0;
}

int chanceCount(count,last)
{
	result=0;
	if (count == last)
	{
		printf("��� ��ȸ�� ���̽��ϴ�.");
		result = 1;
	}
}