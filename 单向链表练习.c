#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)
//Ӧ�ö���Ϊ˫������
//��������β�ڱ��ڵ�(��������ɾ��)
typedef  struct person
{
	char *name;
	int age;
	struct person* next;	
}person_t;
person_t *head = NULL;
enum option
{
	insert = 1, findbyname, deletebyname, display
};
int menu()
{
	int choose;
	printf("1:�����Ա\n");
	scanf("%d", &choose);
	return choose;
	
}
void insert()
{
	person_t *p = (person_t *)malloc(sizeof(person_t));
	printf("input name\n");
	char buf[100] = {0};
	scanf("%s", &buf);
	p->name = (char *)malloc(sizeof(strlen(buf)	+1));
	//�����ָ��ָ��ĸĶ�
	//p->name =buf;
	strcpy(p->name, buf);
	printf("input age:\n");
	scanf("%d", &(p->age));
	p->next = NULL;
	//�׽ڵ�ĳ�ʼ��;
	if (head == NULL)
	{
		head= p;
	}
	else
	{
		person_t *temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = p;
		
	}
}
int findbyname()
{
	printf("������������\n");
	char buf[100] = {0};
	scanf("%s",&buf);
	person_t *p = head;
	while (p != NULL && (strcmp(p->name, buf) != 0))
	{
		p = p->next;
	}
	return p == NULL ? -1 : p->age;
}
void deletebyname()
{
	printf("������ɾ����Ա������\n	");
	char buf[100] = { 0 };
	scanf("%s", &buf);
	person_t *p = head;
	
	if (strcmp(p->name, buf) == 0)
	{
		if (p ->next != NULL)
		{
			
			head = p->next;
			free(p);
		}
		if (p->next == NULL)
		{
			head = NULL;
			free(p);
		}
		return 0;
	}
	//ʣ�µ����,ѭ������pָ��->��Ҫɾ������һ��struct;
	while (p != NULL && (strcmp(p->next->name, buf) != 0))
	{
		p = p->next;
	}
	//��ָ�뱣���ʱҪɾ���Ľڵ�,�Ա�����ͷŴ˽ڵ�
	person_t *temp = p->next;
	//�ų�β�ڵ�����
	if (p->next->next!= NULL)
	p->next = p->next->next;
	//β�ڵ�����
	else p->next = NULL;
	//�ͷ�
	free(temp);
}
void display()
{
	
	person_t *p = head;
	if (p == NULL)
	{
		printf("����ϵͳΪ��\n");
	}
	while( p != NULL)
	{
		printf("��Ա��Ϣ����:\n" );
		printf("%s\n", p->name);
		printf("%d\n", p->age);
		p = p->next;
	}
}
int main()
{

}