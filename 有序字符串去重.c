#include<stdio.h>
int uniquify(char* a)
{
	//�����������
	int i=0 ,j=0;
	while (a[++j])//�ӵڶ������п�ʼ   bb
	{

		//һֱ�Ѳ�ͬ��a[j]��a[1]��ʼһ�θ�ֵ
		if (a[i] != a[j])
		{
			a[++i] = a[j];
		}
		//else Jһֱ�ƶ�û�и�ֵ����
	
		
	}
	a[++i] = '\0';
}
int main()
{
	char a[] = "aaaabbbccccd";
	uniquify(a);
	printf("%s", a);

	system("pause");
}