/*******************************************
��ǻ���к� ��ȭ��ǻ������ 2020114658 ������
���α׷��ֱ���_�⸻���
2��
********************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS


void card_print(int* val, int* sp);
void card_shape(num);
int fullhouse(int* val, int* sp);

int main()
{
	printf("2020114658 ������");
	int random_val[8];
	int random_sp[8];
	int* pval = random_val;
	int* psp = random_sp;
	int result;

	do {
		long seed1 = (long)time(NULL);
		srand(seed1);
		long seed2 = (long)time(NULL);
		srand(seed2);
			for (int i = 0; i < 7; i++) {
				random_val[i] = rand() % 13 + 1;
				random_sp[i] = rand() % 4 + 1;
			}
		result = fullhouse(random_val, random_sp);
	} while (result == 0);
	printf("<��> of <���>\n");
	
	card_print(random_val, random_sp);
	printf("Full House!!\n");
	
	return 0;
}


void card_print(int* val,int* sp) {
	for (int i = 0; i < 7; i++) {
		printf("<%d> of ", val[i]);
		printf("<");
		card_shape(sp[i]);
		printf(">\n");

	}
	
}


void card_shape(num) {
	if (num == 1) printf("Hearts");
	if (num == 2) printf("Diamonds");
	if (num == 3) printf("Clubs");
	if (num == 4) printf("Spades");
}

int fullhouse(int* val, int* sp) {
	for (int i = 0; i < 6; i++) {
		for (int j=1;j<7;j++){
			if (val[i] == val[j]) {
				break;
			}
		}
		
	}
	return 0;
}
