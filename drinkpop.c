#include<stdio.h>
int Drinkpop(int money)
{
	int drink = money;
	int empty = money ;
	while (empty > 1)
	{
		drink += empty / 2;//ÿ�ζ����ӵ��ǵ�ǰ��ƿ�ӵ�һ��
		empty = empty / 2 + empty%2;//���㵱ǰ��ƿ��
	}
	//wrong
	//int empty = money/2 ;
	//while (empty > 1)
	//{
	//	drink += empty / ;//ÿ�ζ����ӵĶ��ǵ�ǰ��ƿ��.ֻ�е�һ���ǿ�ƿ�ӵ�һ��
	//	empty = empty / 2 + empty % 2;//���㵱ǰ��ƿ��
	return drink;
}
int main()
{
	printf("%d", Drinkpop(20));
	getchar();
	
}