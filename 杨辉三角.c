#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <stdio.h> 
int main()
{
	int i, j, n = 0, a[17][17] = { 0 };
	while (n<1 || n>16)
	{
		printf("��������������ε�����:");
		scanf("%d", &n);
	}
	/*��n=4��ʱ��
	  �������Ϊ  1 0 0 0
	             1 1 0 0
				 1 2 1 0
				 1 3 3 1   �Ȱѵ�һ����1 �����ӵڶ��еڶ�����ʼ ����������֮�� ��ӡ��ʱ��ֻ��ӡ j<=i�Ĳ���(�Խ���)

	*/
	for (i = 0; i<n; i++)           
		a[i][0] = 1; /*��һ��ȫ��Ϊһ*/
	for (i = 1; i<n; i++)
	for (j = 1; j <= i; j++)
		a[i][j] = a[i - 1][j - 1] + a[i - 1][j];/*ÿ��������������֮��*/
	for (i = 0; i<n; i++) /*����������*/
	{
		for (j = 0; j <= i; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}

	system("pause");
	return 0;
}