#include<stdio.h>
int main()
{
	float  height=100;
	float s = 0;
	int i=0;
	for (i=1; i <= 10; i++)
	{
		//��һ����� ֻ����ȥ��
		if (i == 1)
		{
			s += height;
			continue;
		}
		//��ͨ����ǵ���ȥ����������
		height /= 2;
	
		//��ʮ�����ֻ����ȥ��worng
		//��ʮ��Ҳ���ڵھŴκ�����h/2����������
		/*if (i == 10)
		{
			s += height;
			continue;
		}*/
		s += 2 * height;
	}
	//��ʮ�������ĸ߶�(i=11)
	height /= 2;
	printf("%f,%f", s, height);
	getchar();
}