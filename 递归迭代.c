#include<stdio.h>
#include<assert.h>
//����������������ʹ�õݹ������ַ�������;
//int mystrlen(const char* a)
//{
//	while (*a != '\0')
//	{
//	
//	return 1 + mystrlen(a + 1);
//	}
//	return 0;
//}
//����1234 ���1 2 3 4 �ݹ�
//void printfNum(int num)
//{
//	if (num >= 10)
//	{
//		num/=10;//wrong
//		printfNum(num);
//	}
//	printf(" %d ", num%10);
//}
//int fe(int num)//�ݹ���ʽÿ��Ҫ�����µ�ջ֡ �鷳
//{
//	if (num <= 2)
//	{
//		return 1;
//	}
//	return fe(num - 1) + fe(num - 2);
//}
//int fe1(int num)
//{
//
//	
//		int result;
//		int pre_result;
//		int pre_pre_result;
//
//		result  = pre_result  = 1;
//
//		while (num > 2)
//		{
//			num  -= 1;
//			pre_pre_result  = pre_result;
//			pre_result  = result;
//			result  = pre_result  + pre_pre_result;
//		}
//		return result;
//	
//}