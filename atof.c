#include<stdio.h>
double my_atof(const char *str)
{
	int flag = 0;
	int e_flag = 0;
	int e_coe = 0;
	double s = 0.0;
	double ret = 0.0;
	double Scoe = 10;
	while (*str == ' ')
	{
		str++;
	}
	if (*str == '-')
	{
		flag = 1;
		str++;
	}
	
	
	
	while (*str != '.'&&str)
		{

			if (*str<'0' || *str>'9')
			{
				return s;
			}
			ret = ret * 10 + *str - '0';// 1 10+2 12   120+3 
			str++;
		}
	switch (*str)
	{
	case '\0':
		return flag = 0 ? ret : -ret;
		break;
	case '.':
		str++;
		break;
	default:
		break;
	}

	while (*str != 'e'&&*str)
		{
			//һ�����ַǷ��ַ��ͷ���0.0
			if (*str<'0' || *str>'9')
			{
				return s;
			}
			ret += (*str - '0') / Scoe;//ʮ��λ �ٷ�λ
			Scoe *= 10;
			str++;
		}
	
	switch (*str)
	{
	case '\0':
		return flag == 0 ? ret : -ret;
		break;
	case 'e':
		str++;
		break;
	case 'E':
		str++;
		break;
	default:
		break;
	}
	while (*str)
	{
		if (*str == '-')
		{
			e_flag = 1;
			*str++;
		}
		if (*str<'0' || *str>'9')
		{
			return s;
		}
		e_coe = e_coe * 10 + *str - '0';//��ȡ��E��ϵ��
		str++;
	}
	if (!e_flag)
	{
		while (e_coe)
		{
			ret *= 10;
			e_coe--;
		}
	}
	//eϵ��Ϊ��
	else 
	{
		while (e_coe)
		{
			ret /= 10;
			e_coe--;
		}
	}
	return flag == 0 ? ret: -ret;
        
}
int main()
{
	char a[] = ".123";
	char b[] = "-.123";
	char c[] = "-.123e-10";
	char d[] = ".123e10";
	char e[] = "123";

	printf("%f", my_atof(a));

	getchar();
}