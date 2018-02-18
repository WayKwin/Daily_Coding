#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void exchange(char*begin, char* end)
{
	while (begin < end)
	{
		char temp = *begin;
		*begin = *end;
		*end = temp;
		begin++;
		end--;
	}
}
char * left(char *str,int n)
{
	int size = strlen(str);
	char* ret = str;
	int times = n%size;
  //���� ��head1��head2����һ�¼���
	char* head1 = str;
	char* head2 = str  + times;
	exchange(head1, head2-1 );
	exchange(head2, str + size - 1);
	exchange(str, str + size-1 );
	return  str;

}
//char * left(char *str, int n)
//{
//	int Oldlen = strlen(str);
//	int times = n%Oldlen;
//	ע�� abcd ���abcdabcd  ԴĿ���ַ���һ���ķ���
//	char *copystr = (char*)malloc(sizeof(char)*Oldlen + 1);
//	if (*copystr == NULL)
//	{
//		return;
//	}
//	strcpy(copystr, str);
//	strcat(str, copystr);
//	free(copystr);
//	char *ret = str + times;
//	*(ret + strlen(str)) = '\0'; false ע��������strlenҲ����
//	*(ret + Oldlen) = '\0';
//	return ret;
//}
//char *right(char *str, int n)
//{
//
//	int Oldlen = strlen(str);
//	int times = n%Oldlen;
//	���԰����ݵ�����װΪһ������
//	char *copystr = (char*)malloc(sizeof(char)*Oldlen + 1);
//	if (*copystr == NULL)
//	{
//		return;
//	}
//	strcpy(copystr, str);
//	strcat(str, copystr);
//	free(copystr);
//	��������Ψһ��������ret
//	char* ret = str+Oldlen-1;
//	*(ret + Oldlen) = '\0';
//	return ret;
//	 
//}
int is_le_ri(char *dst, char*src)
{
	int size_d = strlen(dst);
	int size_s = strlen(src);
	if (size_d != size_s)
	{
		return -1;
	}
	if (strcmp(dst, src) == 0)
	{
		return 0;
	}
	int lefttime = size_d;

	
	while (--lefttime>0)//ע��ʹ��ǰ��--
	{
		
		if (strcmp(src, left(dst, lefttime)) == 0)
			return 0;
	}
	

	return -1;
}
int main()
{
	char a[] = "dabc";
	char b[] = "bcda";
	//�ڶ������� ��ת���򳬹����������Ժ����BUG
	/*while (--size)
	{
		printf("��ת�� %d �� -->%s\n", size, left(a, size));
	}*/
	printf("%d", is_le_ri(b, a));
	getchar();
}