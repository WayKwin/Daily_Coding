#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char *start, char *end)
{
	assert(start);
	assert(end);
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

void reverse_str(char *str, int sz)
{
	assert(str);               //��⴫����ַ���
	char *str1 = str;
	char *left = str;
	char *right = str + sz - 1;
	reverse(left, right);         //�Ƚ��ַ������巴ת
	while (*str1)
	{
		left = str1;
		while ((*str1 != '\0') && (*str1 != ' ')) //�ҵ����ʣ��˴�һ��Ҫ��(*str1 != '\0')�������ƣ���Ϊ�ҵ����һ�����ʵ�ʱ��*str1ֹͣ����ƶ������������ҵ��ո� �����ҵ�������ʶ��
		{
			str1++;
		}
		right = str1 - 1;               //��ʱstr1ָ�򵥴ʺ󷽵Ŀո���Ҫ��һ����ָ�򵥴ʵ����һ����ĸ
		reverse(left, right);               //�����巴ת���ٴη�ת���ʣ���ʹ����ƴд˳��ָ�����
		if (*str1 == ' ')             //���ڿո���ָ�����һλ�����ܲ����´�ѭ����
		{
			str1++;
		}
	}
}

int main()
{
	char arr[] = "student a am i";
	int sz = strlen(arr);
	reverse_str(arr, sz);
	printf ("%s", arr);
	getchar();
	return 0;
}