#include<stdio.h>
int int_cmp(void*p1, void*p2)
{
	return (*(int *)p1 > *(int *)p2);
}

void swap(void *p1, void*p2, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		//���ֽ�Ϊ��λ���и�ֵ
	 	char temp = *((char *)p1 + i);//p1+i������
		*((char *)p1 + i) = *((char *)p2 + i);
		*((char *)p2 + i) = temp;
		
	}
}
void Bubble(void *base, int size,int count, int(*cmp)(void*p1, void*p2))//������ѻ���char(*cmp)(void* p1,void*p2)
{
	int i, j;
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - 1 - i; j++)
		{
			//��Ȼ������һ���ֽ�(char *),�����ڱȽϵ�ʱ���ֱ���ĸ��ֽ���(int *)
			if (cmp((char *)base + j*size, (char *)base + (j + 1)*size))
			{
				//������ �����������ֽ� ��forѭ��һ�α�������4���ֽ� (һ����)
				swap((char *)base + j*size, (char*)base + (j + 1)*size,size);
			}
		}
	}
}
