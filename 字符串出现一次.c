#include<stdio.h>
int main()
{
	char arr[] = "aabccdeefb";
	int size = sizeof(arr) / sizeof(arr[0]);
	int i, j;
	printf("��һ�з���\n");
	for ( i = 0; i < size; i++)
	{
		//jҪ��ͷ��ʼ�� �������� aab ɨ�赽�ڶ���a����ǰ���a��Ϊa�Ƕ�����
		for ( j = 0; j < size; j++)
		{

			//ע�� �޳� i==j�����
			if (arr[j] == arr[i]&&(i!=j))
			{
				break;
			}
		}
		if (j == size)
		{
			printf("%c\n", arr[i]);
			//��ֻ֤�ҵ�һ�γ��ֵ�
			break;
		}
	}
	printf("�ڶ��ַ���\n");
	// �ռ任ʱ��
	int table[26] = { 0 };
	for (int i = 0; i < size; i++)
	{
		table[arr[i] - 'a']++;
	}
	for (int i = 0; i < size; i++)
	{
		if (table[arr[i] - 'a'] == 1)
		{
			printf("%c\n", arr[i]);
			break;
		}
	}
	getchar();
}