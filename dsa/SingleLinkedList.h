#pragma once

#define WIN32_LEAN_AND_MEAN             // 从 Windows 头文件中排除极少使用的内容

#include <iostream>
using namespace std;

template<typename T>
class SingleLinkedList
{
private:
	struct Node
	{
		T data;
		Node* next;
	};
	Node* head;
	int length;
public:
	SingleLinkedList();
	~SingleLinkedList()
	{
		Node* p = head;
		while (p != NULL)
		{
			Node* q = p;
			p = p->next;
			delete q;
		}
	}
	void pushback(T data);
	void pushfront(T data);
	void insert(T data, int position);
	void remove(int position);
	void show();
	T getdata(int position);
	int size();
	Node* through()
	{
		Node* p = head;
		while (p->next != NULL)
		{
			p = p->next;
		}
		return p;
	}
};

template<typename T>
SingleLinkedList<T>::SingleLinkedList()
{
	head = new Node;
	head->next = NULL;
	length = 0;
}

template<typename T>
T SingleLinkedList<T>::getdata(int position)
{
	if (position > length||position<=0)
	{
		cout << "超出范围！" << endl;
		return;
	}
	Node* p = head;
	for (int i = 0; i < position; i++)
		p = p->next;
	return p->data;
}

template <typename T>
inline void SingleLinkedList<T>::pushback(T data)
{
	Node* p = through();
	Node* q = new Node;
	q->data = data;
	q->next = NULL;
	p->next = q;
	length++;
}

template<typename T>
void SingleLinkedList<T>::remove(int position)
{
	if (position > length||position<=0)
	{
		cout << "超出范围！" << endl;
		return;
	}
	Node* p = head;
	for (int i = 0; i < position - 1; i++)
		p = p->next;
	Node* q = p->next;
	p->next = q->next;
	delete q;
	length--;
	return;
}

template<typename T>
int SingleLinkedList<T>::size()
{
	return length;
}

template<typename T>
void SingleLinkedList<T>::insert(T data, int position)
{
	if (position > length)
	{
		pushback(data);
		return;
	}
	if (position <= 1)
	{
		pushfront(data);
		return;
	}
	Node* p = head;
	for (int i = 0; i < position - 1; i++)
		p = p->next;
	Node* q = p->next;
	Node* target = new Node;
	target->data = data;
	target->next = q;
	p->next = target;
	length++;
	return;
}

template <typename T>
void SingleLinkedList<T>::pushfront(T data)
{
	Node* p = head->next;
	Node* q = new Node;
	q->data = data;
	q->next = p;
	head->next = q;
	length++;
	return;
}

template <typename T>
void SingleLinkedList<T>::show()
{
	Node* p = head;
	for (int i = 0; i < length; i++)
	{
		p = p->next;
		cout << p->data << " ";
		cout << endl;
	}
	cout << endl;
	return;
}