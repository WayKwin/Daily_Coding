#include<stdio.h>
#define range 2000
int main()
{
	double size = range;//sqrt����������int
	int i;
	int j;
	int check[range] = { 0 };// 0���������� 
	for (i = 2; i *i< range; i++)//C=P*O;sqrt range ���ɸ�� �ұ߾Ϳ϶��Ҳ�����
	{
		if (!check[i])//����������Ž����޳�����ɵĺ���
		{
			for (j = 2 * i; j < range; j += i)
			{
				check[j] = 1;//�޳�������ɵĺ���
			}
		}
	}
	for (i = 2; i < range; i++)
	{
		if (check[i] == 0)//��ӡ������������
		{
			printf("%d ", i);
		}
	}
	getchar();
	return 0;
}