#include<stdio.h>
#include<time.h>
#define range 2000
int main()
{
	int i;
	int j;
	int prime[range] = { 0 };
	int check[range] = { 0 };
	int primes = 0;
	for (i = 2; i < range; i++)
	{
		if (!check[i])
		{
			prime[primes++] = i;
		}
		for (j = 0; j < primes && i*prime[j] < range; j++)
		{
			check[i*prime[j]] = 1;//�������Ի�Ϊһϵ�������ĳ˻�
			if (!i%prime[j])//������prime[j]�е�������������� �ҳ���С�������Ӽ��ɱ�֤���ظ�ѡ
			{
				break;
			}
		}
	}
	printf("��ʱ:%.2f S", (double)clock() / CLOCKS_PER_SEC);
	printf("\n");
	for (i = 0; i <primes; i++)
	{
		printf("%d ", prime[i]);
	}

	getchar();
	return 0;
}