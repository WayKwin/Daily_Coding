#include<stdio.h>
#include<assert.h>
int substr(char *dst, const char *src, int start, int len)
{
	assert(dst);
	assert(src);
	int count = 0;
	char*  begin = src + start;
	if (begin + len -1> dst)//���������
	{
		//�Ӻ���ǰ
	}
	while (len--&&*begin != '\0')//  len--&&*begin=='\0'
	{
		*dst++ = *begin++;
		count++;
	}
	if (*--dst != '\0')//���һ��ָ��ָ��begin���� ���Ե�����
	{
		*++dst = '\0';
		count++;
	}
	return count;
	
}

int main()
{
	char a[] = "abcdefg";
	char b[] = "1234567";
	printf("%d", substr(a, b, 1, 2));
	getchar();
	return 0;
}