#include<stdio.h>
int main()
{
	int a[] = { 1, 3, 5, 7 };
	int b[] = { 4, 5, 8, 9, 10};
	int asize = 4;
	int bsize = 5;
	int c[9];
	int i = 0;
	int j = 0;
	int k = 0;
	for (; i < asize || j < bsize;)
	{
		if (i<asize && (bsize<=j||a[i] <= b[j]))// ���� i < asize || j < bszie  ����i<asize���ܻ᲻����,���������뱣֤a[i]�ĺϷ���
		{                       //    i<asize&&a[i]<=b[j] Ҳ������ ����i>size ת��else if �жϵ���b[j]<a[i]�����,��ѭ��,
			                    //��ʵ�ϵ�i>size  �Ͱ�Bȫ��װ��C������
			c[k++] = a[i++];    // ������� bisze<=k  bԽ��,Ҳ����b[]ȫ��װ����C[]��,��ôA[]ʣ�µĿ϶������ж�,Ҫȫ��װ��C[]
		}                       //�ڱ� �������
		else if (j<bsize && (asize<=i||b[j] < a [i]))
		{
			c[k++] = b[j++];
		}
	}
	getchar();
	return 0;
}