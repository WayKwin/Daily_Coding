#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void leftTwist(char *p,int cnt)
{
	//����һ�ξ��ǰ�����ߵ���ĸ�����Ƶ��ַ���ĩβ
	//���ξ�����һ�εĻ��������ƶ�һ����ĸ
	char *now = p;
	char *next = p+1;
	char temp = *now;
	
	while (*next != '\0')
	{
		int temp = *now;
		*now = *next;
		*next = temp;
		now++;
		next++;
	}
	cnt--;
	if (cnt > 0)
	{
		leftTwist(p, cnt);
	}
}
void rightTwist(char *p, int cnt, int len)
{
	char *start = p + len - 1;
	char *before = p + len - 2;
	int exchTime = len-1;
	while (exchTime)
	{
		char temp = *start;
		*start = *before;
		*before = temp;
		*start--;
		*before--;
		exchTime--;
	}
	cnt--;
	if (cnt > 0)
	{
		rightTwist(p, cnt, len);
	}
}
int isBeforeStr(char *a, char*b, int aLen)
{
	//�ж��Ƿ���������������
	int ifLeft = 0;
	int ifRight = 0;
	int i ;
	//���ж�һ�ο��ǲ���ԭ�����ַ���,Ȼ����תһ��...��ÿ���ܷ��b�ַ�������
		if (strcmp(a, b) == 0)
		{
			ifLeft = 1;
			
		}
		if (ifLeft == 0)
		{
	    for (i=1; i < aLen; i++)
	    {
		leftTwist(a, i);
		if (strcmp(a, b) == 0)
		{
			ifLeft = 1;
			break;
		}
	}
		}
		//ifleft=0���������ܺ�ԭ�ַ������Ҳ�����������
	if (0 == ifLeft)
	{
		for (i = 1; i < aLen; i++)
		{
			if (strcmp(a, b) == 0)
			{
				ifRight = 1;
				break;
			}
			rightTwist(a, i, aLen);
		}
	}
	//���������κζ����˾�OK
	if (ifRight || ifLeft)
	{
		return 1;
	}
	else
		return 0;

}
int main()
{
	char a[] = { 'a', 'b', 'c', 'd','\0'};//   char *p="abcd";�ұ��ַ�������ֻ�������� ���ܹ��޸�!
	char b[] = { 'b', 'c', 'd' ,'a','\0'};
	int len = strlen(a);
	printf("%d", isBeforeStr(a, b, len));
	system("pause");
	return 0;
}