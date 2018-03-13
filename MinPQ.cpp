#include<iostream>
using  namespace::std;
#define less(x,y)	((x<y)?1:0)
#define exch(x,y)	int c=y; y=x;x=c
class indexMinPQ
{
private:
	int *a;//���ȶ���
	int n = 0;//���ȶ��еĳ���
	char *b;// value
	int k;//key
	//*a����װ k  ͨ��b[k]��value
	void swim(int m)
	{
		while (m>1)
		{
			// key1->value < key2->value
			//����a[n]���key   keyָ�����ݲ���
			if (b[a[m]] <b[a[m / 2]])
			{
				exch(a[m], a[m / 2]);
				m /= 2;
			}
			//ע����ڵ����ֱ�ӽ���
			else break;
		}
	}
	void sink(int m)
	{
		//�������ӽڵ��ʱ��
		while (2 * m <= n)
		{
			//Ĭ�ϵ����ӽڵ�
			int j = 2 * m;
			//��������ӽڵ��ұ����ӽڵ�С
			if (j < n&&less(b[a[j+1]], b[a[j]] ))
			{
				j++;//����ҽڵ�
			}
			//������ڵ�����ݱ���С�ӽڵ�����С  ,��������key
			if (less(b[a[m]],b[a[j]])) break;
			exch(a[m], a[j]);
			m = j;
		}
	}
public:
	indexMinPQ(int *start = (int *)malloc(sizeof(int)*(3)),char *value=(char*)malloc(4)) :a(start),b(value){};
	~indexMinPQ(){ free(a); free(b); }
	void insert(int key,char  value)
	{
		a[++n] = key;
		b[key] = value;
		swim(n);
	}
	//�ҵ���С������
	bool isEmpty()
	{
		return (n < 1 ? true : false);
	}
	int find_minkey()
	{
		return a[1];
	}
	//�ҵ���СԪ��
	char find_minvalue()
	{
		return b[a[1]];
	}
		//���ı�����,���ı����ȶ���
	void chage_key(int key,char value)
	{
		b[key] = value;
	}
	//������Сֵ������
	int del_minkey()
	{
		int p = a[1];
		a[1] = a[n--];
		sink(1);
		return p;
	}
	char findvalue(int key)
	{
		return b[key];
	}
	char del_minvalue()
	{
		return b[del_minkey()];
	}


};
int main()
{
	//���ȶ��п�������Ч�ռ������Ƿ������,��СԪ��
	indexMinPQ m;
	char *a = "adg";
	char *b = "beh";
	char *c = "cfi";
	char*list[] = { a, b, c };
	//  a  b  c ��key�ֱ�պþ��� 0 1 2 
	for (int i = 0,k=0; i <3; i++)
	{
		m.insert(i, list[i][k]);
	}
	int key ;
     //���ȶ���Ϊ0��ʾ�������
	while (!m.isEmpty())
	{
		printf("%c", m.find_minvalue());
		key = m.del_minkey();
		//ע��ǰ��++  ��֤����insert \0  �����Ǵӵڶ����ַ���ʼ����,(�պ�����ǰ���Ѿ���ӡ��һ��Ԫ����,��Ҫ����ڶ���Ԫ�ص�Ҫ��)
		if (*(++list[key]) != '\0')
		{
			m.insert(key, *(list[key]));
		}
	}
	getchar();
	return 0;
}