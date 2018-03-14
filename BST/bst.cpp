#include"bst.h"
#include<iostream>
val_t BST::get(key_t key)
{
	//�Ӹ��ڵ㿪ʼ��
	return get(root, key);
}
val_t BST::get(Node& x, key_t key)
{
	if (&x == NULL)
	{
		return -1;
	}
	int cmp = (key < x.key ? -1 : key = x.key ? 0 : 1);
	if (cmp == -1) return get(*x.left, key);
	else if (cmp == 1) return  get(*x.right, key);
	else return x.val;
	
}
void BST::put(key_t key, val_t val)
{
	//  ˽��put��һ�����͵ĵݹ�,��root��ջ,����root��ջ ,��Ϊ����ֵ��Node���͵�,Ҳ����д��void����
	root = *put1(&root, key, val);
}
//�ݹ��
Node* BST::put1(Node* x, key_t key, val_t val)
{
	if (x == NULL)
	{
		Node e(key, val, 1);
		return &e;
	}
	int cmp = (x->key > key ? 1 : x->key = key ? 0 : -1);
	//ͨ�����Ҵ�С�Ƚ�  ��ջ�ݹ鲻���ҵ����ʲ����
	if (cmp == -1)
		x->left = put1(x->left, key, val);
	else if (cmp == 1)
		x->right = put1(x->right, key, val);
	else
		x->val = val;
      x->N = x->left->N + x->right->N + 1;
	  return x;
}
//������ ����� ������û�л��ݵĹ���
Node* BST::put2(Node* x, key_t key, val_t val)
{

	while (x != NULL)
	{
		int cmp = (x->key > key ? 1 : x->key = key ? 0 : -1);
		if (cmp == 1)
		{
			x->N++;
			//��x=x->right  ΪNULLʱ Ҳ���������ӽڵ�Ϊ��.���ҵ��˺��ʵĲ����
			x = x->right;
		}
		if (cmp == -1)
		{
		x->N++;
		x=x->left;
		}
		//keyֵ��ͬ�����
		else
		{
			x->val = val;
		}
	}
	Node e(key, val, 1);
	x = &e;
	return &root;
}

key_t BST::select(int t)
{
	Node *x=& root;
	if (x == NULL)
	{
		return -1;
	}
	while (x!=NULL)
	{
		//ע��NULL
		key_t key = x->left->N;
		if( key== t)
		return x->N;
		else if (key > t)
		{
			x = x->left;
		}
		else if (key < t)
		{
			t = t - key - 1;
			x = x->right;
		}
	}
}

