int a[] = {1,2,3,4};
    printf("%d\n",sizeof(a));//16  ����������ֳ�
    printf("%d\n",sizeof(a+0));//4  ��һ��Ԫ�ص�ַ���ֳ�
    printf("%d\n",sizeof(*a)); //4 *a==*(a+0)==a[0] ��һ��Ԫ�ص��ֳ�
    printf("%d\n",sizeof(a+1));//4  �ڶ���Ԫ�صĵ�ַ
    printf("%d\n",sizeof(a[1]));//4  �ڶ���Ԫ�ص�ַ�ֳ�
    printf("%d\n",sizeof(&a));  //4    ���������ַ���ֳ�(��ַ��4���ֳ�)
    printf("%d\n",sizeof(*&a)); //16   &aȡ���������ַ�ĵ�ַ Ȼ��*(&a)����*p ��ʾ���������ֵ, ����������ֵ���ֳ�16 
    printf("%d\n",sizeof(&a+1));//4 �����������ĵ�ַ���ֳ�
    printf("%d\n",sizeof(&a[0]));//4 ��1��Ԫ�صĵ�ַ�ֳ�
    printf("%d\n",sizeof(&a[0]+1));//4 �ڶ���Ԫ�صĵ�ַ�ֳ�
char arr[] = {'a','b','c','d','e','f'};

printf("%d\n", strlen(arr));//���ֵ   ��Ԫ�ص�ַ������������\0�ű�ʾ���� ���ﲻ֪�����Ľ���

 printf("%d\n", strlen(arr+0));//���ֵ

 printf("%d\n", strlen(*arr));//err    strlen(�����洫���ǵ�ַѽ) 

 // *arr�����ú���һ��ֵ"a"��ASII(98) 98�����ַ���ǲ��������ʵ�

 printf("%d\n", strlen(arr[1]));//err   ͬ�ϲ�������b��ASII��

 printf("%d\n", strlen(&arr));//���ֵ    ��������������ĵ�ַ,����Ҳ���׸�Ԫ�صĵ�ַ

printf("%d\n", strlen(&arr+1));//���ֵ   �����������ַ+1��ĵ�ַ��ʼ������

 printf("%d\n", strlen(&arr[0]+1));       //���ֵ�ӵڶ���Ԫ�صĵ�ַ��ʼ������

printf("%d\n", sizeof(arr));//6       һ�� char 1���ֽ�  sizof(��������������ʾ�������鳤��)

printf("%d\n", sizeof(arr+0));//4     a��Ԫ�صĵ�ַ 4���ֽ�

printf("%d\n", sizeof(*arr));//1       ������ ��ʾ��һ��Ԫ��'a' ������1

printf("%d\n", sizeof(arr[1]));//1      ͬ�� ������'b'

printf("%d\n", sizeof(&arr));//4         ��������ĵ�ַ ,��ַ����4���ֽ�

printf("%d\n", sizeof(&arr+1));//4           ��������ĵ�ַ����һ����ַ�� ��ַ����

printf("%d\n", sizeof(&arr[0]+1));//4       �ڶ���Ԫ�ص�ַ�ĳ��� 
char arr[] = "abcdef";

printf("%d\n", strlen(arr));//6     //�ַ���Ĭ�Ϻ�����\0   ��ʾ��Ԫ�ص�ַ������

printf("%d\n", strlen(arr+0));//6     ������һ��  ע��strlen ��size of������!!!

printf("%d\n", strlen(*arr));//err     ��  �����ܷ��ʵ��ڴ��ַ

printf("%d\n", strlen(arr[1]));//err   ��  ͬ��

printf("%d\n", strlen(&arr));//6          ����Ԫ�صĵ�ַ     ��ʵҲ�ǵ�һ��Ԫ�صĵ�ַ ����\0 �պ�6��

printf("%d\n", strlen(&arr+1));//���ֵ   ���������ַ��(Ҳ������\0)

printf("%d\n", strlen(&arr[0]+1));//5   �ӵڶ���Ԫ�ص�ַ��ʼ�� ����\0 5��

 printf("%d\n", sizeof(arr));//7          ȫ���ֳ��ַ���Ĭ�ϰ��� \0

 printf("%d\n", sizeof(arr+0));//4      �׵�ַ

 printf("%d\n", sizeof(*arr));//1       'a'

 printf("%d\n", sizeof(arr[1]));//1   ' b'

 printf("%d\n", sizeof(&arr));//4       ��������ĵ�ַ �ĵ�ַ�ֳ�

 printf("%d\n", sizeof(&arr+1));//4     ��������ĵ�ַ��һ����ַ �ĵ�ַ�ֳ�

 printf("%d\n", sizeof(&arr[0]+1));//4    'b'�ĵ�ַ ���ֳ�  4��