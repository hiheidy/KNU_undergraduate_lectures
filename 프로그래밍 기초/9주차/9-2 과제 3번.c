/*********************
��ǻ���к� ��ȭ��ǻ������
2020114658 ������
9���� 2���� ����
**********************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//3��


struct person {
	char name[20];
	char tel[20];
	char adress[80];
};

typedef struct person person;

union reg {
	person man;
	char company[20];
};

typedef union reg reg;

struct car {
	char year[10];
	char kind[20];
	reg owner;
};

typedef struct car car;

int main()
{
	printf("\n��ǻ���к� ��ȭ��ǻ������ 2020114658 ������ \n\n");
	car c[2] = { {"2012 09","�׷��� GT",{"ȫ�浿","011-1111-1111","����� ���α� ��ô��"}},{"2013 04","���Ǵ�Ƽ","���Ǵ�Ƽ�Ͻ�"} };
	printf("%10s%16s%30s\n\n", "�� ��", "�� ��", "�� ��");
	printf("%10s%16s%10s%14s%24s\n", c[0].year, c[0].kind, c[0].owner.man.name, c[0].owner.man.tel, c[0].owner.man.adress);
	printf("%10s%16s%30s\n", c[1].year, c[1].kind, c[1].owner.company);

	return 0;
}