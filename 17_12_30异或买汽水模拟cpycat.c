#include<stdio.h>
#include<assert.h>
//�ҳ��������� ���
//int main()
//{
//	int a[] = { 2, 2, 3, 3, 4, 4, 1 };
//	int i = 0;
//	int len = sizeof(a) / sizeof(a[0]);
//	int Num = a[0];
//	for (i=1; i < len; i++)
//	{
//		Num ^= a[i];
//	}
//	printf("�������ֵ�����:%d\n", Num);
//	getchar();
//	return 0;
//}
//����ˮ����
//�������õݹ������־޸���,�������־��Ǽ򵥵�2*n-1��ϵ
//
//int main()
//{
//	int money = 0;
//	int count = 0;
//	scanf("%d", &money);
//	count = 2 * money - 1;
//	printf("%d\n", count);
//	getchar();
//	return 0;
//}
//�������
//////////int CountBottleNumM(int bottle)
//////////{
//////////	//int m = bottle / 2;
//////////	//int r = bottle % 2;
//////////	int count = 0;
//////////
////////
//////////
//////////	if (bottle != 0)
//////////		return bottle + CountBottleNumM(bottle / 2);
//////////		return 0;
//////////}
//////////int CountBottleNumR(int bottle)
//////////{
//////////	int count = 0;
//////////
//////////	while (bottle != 0)
//////////	{
//////////		if (bottle / 2 == 1)
//////////		{
//////////			count++;
//////////		}
//////////		bottle /= 2;
//////////	}
//////////	
//////////	
//////////		return count + CountBottleNumR(count);
//////////	
//////////}
//////////int WeCanDrink(int money)
//////////{
//////////	int bottle = money / 1;
//////////	return CountBottleNumR(bottle) + CountBottleNumM(bottle);
//////////	

char* my_strcpy(char *des,const char *src)
{
	assert(src!=NULL,des!=NULL);
	while ((*des++ = *src++));//��ֵ��䷵�ؽ������ֵ 
	return des;
}
char* my_strcat(char *des, const char *src)
{
	assert(src != NULL, des != NULL);
	while (*++des);//ע��Ӧ��ǰ++,while������ʱ��*des��ֵ����'\0' ;��++ ��*desֵ��'\0',des��Ҫ++һ��
	while ((*des++ = *src++));
	return des;
}
int main()
{
	char a[] = "abcd";//ע��char *="abcd"�����޸�
	char b[] = "efgh";
	my_strcat(a, b);
	printf("%s\n", a);
	my_strcpy(a, b);
	printf("%s\n", a);

	getchar();
}