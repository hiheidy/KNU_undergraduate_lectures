/*********************
��ǻ���к� ��ȭ��ǻ������
2020114658 ������
9���� 1���� ����
**********************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//3��

struct person {
	char name[10];
	char phone[20];
	char address[50];
};

struct employee {
	struct person info;
	char number[20];
	int monthpay;
	double incentive;
	double yearpay;
};

int main()
{
	struct employee p1 = { "������","011-1111-1111","����� ���α� ��ô��","20123478",1200000,1.2 };
	struct employee p2 = { "���ڰ�","011-2222-2456","��⵵ �Ⱦ�� ��굿","20123479",1500000,1.5 };
	struct employee p3 = { "������","011-3333-2456","��õ������ ������","20123480",1800000,1.8 };
	struct employee p4 = { "���¿�","017-2222-2456","��⵵ �ϻ�� ȭ�","20123481",2200000,2.5 };
	p1.yearpay = p1.monthpay * (12 + p1.incentive);
	p2.yearpay = p2.monthpay * (12 + p2.incentive);
	p3.yearpay = p3.monthpay * (12 + p3.incentive);
	p4.yearpay = p4.monthpay * (12 + p4.incentive);

	printf("��ǻ���к� ��ȭ��ǻ������ 2020114658 ������\n\n");

	printf("\n  �� ��   �� ��		�� ȭ �� ȣ		�� ��		 �� ��	        �μ�Ƽ��	    �� ��   \n\n");
	printf("%s  %s       %s     %s    %d          %d             %.1lf\n", p1.number, p1.info.name, p1.info.phone, p1.info.address, p1.monthpay, (int)(p1.incentive*100), p1.yearpay);
	printf("%s  %s       %s     %s    %d          %d             %.1lf\n", p2.number, p2.info.name, p2.info.phone, p2.info.address, p2.monthpay, (int)(p2.incentive * 100), p2.yearpay);
	printf("%s  %s       %s     %s    %d          %d             %.1lf\n", p3.number, p3.info.name, p3.info.phone, p3.info.address, p3.monthpay, (int)(p3.incentive * 100), p3.yearpay);
	printf("%s  %s       %s     %s    %d          %d             %.1lf\n", p4.number, p4.info.name, p4.info.phone, p4.info.address, p4.monthpay, (int)(p4.incentive * 100), p4.yearpay);

	  
	return 0;


}


/*
* 20123478 ������ 011-1111-1111 ����� ���α� ��ô��
* 20123479 ���ڰ� 011-2222-2456 ��⵵ �Ⱦ�� ��굿
* 20123480 ������ 011-3333-2456 ��õ������ ������
* 20123481 ���¿� 017-2222-2456 ��⵵ �ϻ�� ȭ�
*/