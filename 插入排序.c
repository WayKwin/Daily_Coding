#include<iostream>
using namespace::std;
int main()
{
	int arr[] = { 5, 4, 2, 5, 3, 2, 6, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i =1; i < size; i++)
	{

		for (int j = i ; j>0; j--)
		{
			//��Ҫ���Ч��,����ѭ�����ҵ���Сֵ,֮������ѭ������һ��
			//�����������ͳ�ѡ��������
			if (arr[j] < arr[j-1])
			{
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	getchar();
	return 0;
}