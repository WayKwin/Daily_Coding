 //������
#include<stdio.h>
char * Is_palindromic(int a)
{
	int res = 0;
	int temp = a;
	while (temp)
	{
		//�����ַ�ת 123 ���321;
		res = res * 10 + temp % 10;
		temp /= 10;
	}
	if (res == a)
	{
		return "������������ǻ�����";
	}
	else return "���ǻ�����";
}
int main()
{
	int a = 12321;
	printf("%s", Is_palindromic(a));
	getchar();
}