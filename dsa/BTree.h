#pragma once

#define WIN32_LEAN_AND_MEAN
#include <iostream>
#include "BTnode.h"
#include <queue>

using namespace std;

template<typename T>
class BTree {
private:
	BTnode<T>* root;
public:
	BTree(BTnode<T>* root = nullptr) :root(root) {};
	~BTree()
	{

	};
	BTnode<T>* getroot() { return root; };
	void setroot(BTnode<T>* root) { this->root = root; };
	bool isempty() { return root == NULL; };
	BTnode<T>* getleft() { return root->left; };
	BTnode<T>* getright() { return root->right; };
	void preorder(BTnode<T>* root);
	void inorder(BTnode<T>* root);
	void postorder(BTnode<T>* root);
	void levelorder(BTnode<T>* root);
};

template<typename T>
void BTree<T>::preorder(BTnode<T>* root)
{
	cout << root->getdata() << ' ';
	if (root->getleft() != nullptr)
		preorder(root->getleft());
	if (root->getright() != nullptr)
		preorder(root->getright());
}

template<typename T>
void BTree<T>::inorder(BTnode<T>* root)
{
	if (root->getleft() != nullptr)
		inorder(root->getleft());
	cout << root->getdata() << ' ';
	if (root->getright() != nullptr)
		inorder(root->getright());
}

template<typename T>
void BTree<T>::postorder(BTnode<T>* root)
{
	if (root->getleft() != nullptr)
		postorder(root->getleft());
	if (root->getright() != nullptr)
		postorder(root->getright());
	cout << root->getdata() << ' ';
}

template<typename T>
void BTree<T>::levelorder(BTnode<T>* root)
{
	queue<BTnode<T>*> orderline;
	BTnode<T>* target = root;
	while (target != nullptr)
	{
		cout << target->getdata() << ' ';
		if (target->getleft() != nullptr)
			orderline.push(target->getleft());
		if (target->getright() != nullptr)
			orderline.push(target->getright());
		if (orderline.size() != 0)
		{
			target = orderline.front();
			orderline.pop();
		}
		else
			target = nullptr;
	}
	cout << endl;
}

template<typename T>
BTree<T> byarray(T* pt, int length, BTree<T> target);

template<typename T>
BTree<T> byarray(T* pt, int length, BTree<T> target)
{
	int count = 0;
	T* p = pt;
	if (length == 0)
	{
		target.setroot(nullptr);
		return target;
	}
	queue <BTnode<T>*> orderline;
	BTnode<T>** nodelist=new BTnode<T>*[length];
	for(int i=0;i<length;i++)
		nodelist[i]=new BTnode<T>(*(p+i));
	target.setroot(nodelist[0]);
	orderline.push(target.getroot());
	count++;
	while (count < length)
	{
		BTnode<T>* temp = orderline.front();
		orderline.pop();
		temp->setleft(nodelist[count]);
		orderline.push(temp->getleft());
		count++;
		if (count < length)
		{
			temp->setright(nodelist[count]);
			orderline.push(temp->getright());
			count++;
		}
		else
		{
			temp->setright(nullptr);
			break;
		}
	}
	return target;
}
