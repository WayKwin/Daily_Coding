#include"ListNode.h"
class List
{
private:
	Node header;
	Node trailer;
	int _size;
public:
	//���캯��
	List(){ init(); }
	void init();
	//ֻ���ӿ�
	Node frist() const{ return header->Succ; }
	Node last() const{ return trailer->Pred; }
	//д��ӿ�
	Node insertAsFrist(int data);//�����׽ڵ�  header ͷ
	Node insertAsLast(int data);//����β�ڵ�   trailer ĩ
	Node insertAsB(Node p, int data);//�ڸýڵ�ǰ����ڵ�
	Node insertAsA(Node p, int data);//�ڸýڵ�����ڵ�
	int remove(Node p);
};
