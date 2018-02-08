
#include <memory>  
#include  <iostream>  
using namespace std;

const int max_size = 20;//쳲���������ĳ���  

/*����һ��쳲���������*/
void Fibonacci(int * F)
{
	F[0] = 0;
	F[1] = 1;
	for (int i = 2; i<max_size; ++i)
		F[i] = F[i - 1] + F[i - 2];
}

int Fibonacci_Search(int *a, int n, int key)  //aΪҪ���ҵ�����,nΪҪ���ҵ����鳤��,keyΪҪ���ҵĹؼ���  
{
	int lo = 0;
	int hi = n - 1;
	int F[max_size];
	Fibonacci(F);
	int k = 0;
	while (n > F[k] - 1)
	{
		k++;
	}
	int *temp = new int[F[k] - 1];//���������ݵ�F[k]-1	��С
	memcpy(temp, a, n*sizeof(int));
	for (int i = n; i < F[k] - 1; i++)//temp����������F[k]-1
		
	{
		temp[i] = a[n - 1];
	}
	while (lo < hi)
	{
		int mid = lo + F[k - 1] - 1;
		if (key < temp[mid])
		{
			hi = mid - 1;
			k--;
		}
		else if (temp[mid] < key)
		{
			lo = mid + 1;
			k -= 2;
		}
		else{
			if (mid < n)
				return mid;
			else
				return n - 1;
		}
	}
	delete []temp;
	return -1;
}

int main()
{
	int a[] = { 0, 16, 24, 35, 47, 59, 62, 73, 88, 99 };
	int key = 24;
	int index = Fibonacci_Search(a, sizeof(a) / sizeof(int), key);
	cout << key << " is located at:" << index;
	system("PAUSE");
	return 0;
}