#include<stdio.h>

int main()
{
	int arr[] = { 3, 2, 3, 2, 3, 2, 3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int lo = 0;
	int  hi = lo + size-1;
	while (1)
	{
		while ( ((arr[lo]&1) == 1 ) && (lo < hi))
		{
			lo++;
		}
		//���������������ȼ�����,����debug�˺þ�
		//�Ժ�����λ����һ��Ҫ������
		//   (arr[hi]&1) == 0!!!!!
		//��������>λ����>�߼�����
		while ( ( (arr[hi]&1) == 0 )&& (lo < hi))
		{
			hi--;
		}
		if (hi <= lo)
		{
			break;
		}
		int temp = arr[lo];
		arr[lo] = arr[hi];
		arr[hi] = temp;
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
	getchar();
}