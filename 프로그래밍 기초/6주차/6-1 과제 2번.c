/*********************
��ǻ���к� ��ȭ��ǻ������
202011458 ������
6���� 1���� ����
**********************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//2��

int main()
{
	int num[20];
	int cnt[20][2] = { 0 };
    int save, count = 0;
	
	while (count<=20)
	{
		printf("0���� 9������ ������ �Է��Ͻÿ�: ");
		scanf_s("%d", &save);

		if (save >= 0 && save <= 9)
		{
			num[count] = save;
			count++;
		}
			
	}

    int i, j, k = 0;

    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (cnt[j][0] == num[i])
            {
                cnt[j][1]++;
                break;
            }
        }
        if (j == k)
        {
            cnt[k][0] = num[i];
            cnt[k][1]++;
            k++;
        }
    }

    for (i = 0; i < 10; i++)
    {
        if (cnt[i][1] != 0)
            printf("%d: %dȸ ���\n", cnt[i][0], cnt[i][1]);
    }
	
	return 0;

}