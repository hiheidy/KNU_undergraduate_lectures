/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
5���� 1���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//3��


int main()
{
	int value = 0x2F24263F;
	char* pc = (char*)&value;

	printf("������    ���尪         �ּҰ�\n");
	printf("------------------------------------\n");
	printf(" value     %0#x    %u\n", value, &value);

	for (int i = 0; i <= 3; i++)
	{
		char ch = *(pc + i);
		printf("*(pc+%d)    %0#x    %2c    %u\n", i, ch, ch, pc + i);

	}

	 return 0;


}