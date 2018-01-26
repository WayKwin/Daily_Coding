#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//������
/*
���
abcd1234abcd1234
��������
ab cd1234ab cd1234
cd1234ab
*/
void leftmoive(char*str, int n)
{
	assert(str);
	int len = strlen(str);
	n %= len;
	char *mem = (char *)malloc(2 * len + 1);
	strcpy(mem, str);
	strcat(mem, str);
	strncpy(str, mem + n, len);
	free(mem);

}
//������
//�ַ�������
/*
�����Ĵ�
abcd 1234
dcba 4321
1234 abcd

*/
void reverse_str(char *start, char*end)
{
	while (start < end)
	{
		*start ^= *end;
		*end ^= *start;
		*start ^= *end;
		start++;
		end--;
	}
}
void leftmove1(char*str, int n)
{
	reverse_str(str, str + n - 1)
	reverse_str(srt + n, str + len - 1);
	reverse_str(str, str + len - 1);
}
//����һ
void leftmove(char*str, int n)
{
	assert(str);
	int len = strlen(str);
	n %= len;
	int i = 0;
	char temp = str[0];
	while (n--){
	while (i<len-1)//���һ�� a[8]=a[9]
	{
		str[i] = str[i + 1];
	}
	}
	str[i] = temp;
}
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