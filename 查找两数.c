#include<stdio.h>
void search(int *arr, int count)
{
	int n;
	int data1 = 0;
	int data2 = 0;
	int i = 0;
	int flag = 1;
	for (i=0; i < count-1; i++)
	{
		n = arr[i] ^ arr[i + 1];
	}
	while (!(n&flag))
	{
		flag <<= 1;
	}
	for (i = 0; i < count; i++)
	{
		//�ѵ���鴦��
		//ע����� �����flag��1λ   ��λ����Ϊ0 ��ʾ��λ�϶�Ϊ0,������������0, �����λΪ1,
		//��������ȷ���Ƕ��� 
		//if ((arr[i] & flag) ==1) wrong
		if ((arr[i] & flag) ==0)
		{
			data1 ^= arr[i];
		}
		else 
		{
			data2 ^= arr[i];
		}
	}
	printf("�ҵ��������� %d ,%d", data1, data2);
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4,5, 6,7 };
	int count = sizeof(arr) / sizeof(arr[0]);
	search(arr,count);
	getchar();
	return 0;
}