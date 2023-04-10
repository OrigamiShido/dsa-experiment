#pragma once

#define WIN32_LEAN_AND_MEAN             // 从 Windows 头文件中排除极少使用的内容
#include <iostream>

using namespace std;

template <typename T>
class NoheadSLinkedList
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
	NoheadSLinkedList();
	~NoheadSLinkedList() 
	{
		Node* p = head;
		while (p != NULL)
		{
			Node* q = p;
			p = p->next;
			delete q;
		}
	};
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
	}//有无方法让这个函数独立出来？
};

template<typename T>
NoheadSLinkedList<T>::NoheadSLinkedList()
{
	length = 0;
}

template<typename T>
void NoheadSLinkedList<T>::pushback(T data)
{
	Node* p = new Node;
	p->data = data;
	p->next = NULL;
	if (length == 0)
	{
		head = p;
	}
	else
	{
		Node* q = through();
		q->next = p;
	}
	length++;
}

template<typename T>
int NoheadSLinkedList<T>::size()
{
	return length;
}

template<typename T>
void NoheadSLinkedList<T>::pushfront(T data)
{
	Node* p = new Node;
	p->data = data;
	p->next = head;
	head = p;
}

template<typename T>
T NoheadSLinkedList<T>::getdata(int position)
{
	if (position > length || position <= 0)
	{
		cout << "超出范围！" << endl;
		return;
	}
	Node* p = head;
	for (int i = 0; i < position - 1; i++)
	{
		p = p->next;
	}
	return p->data;
}

template<typename T>
void NoheadSLinkedList<T>::remove(int position)
{
	if (position > length || position <= 0)
	{
		cout << "超出范围！" << endl;
		return;
	}
	Node* p = head;
	if (position == 1)
	{
		Node* temp = head;
		head = head->next;
		delete temp;
		length--;
		return;
	}
	for (int i = 0; i < position - 2; i++)
	{
		p = p->next;
	}
	Node* temp = p->next;
	p->next = temp->next;
	delete temp;
	length--;
	return;
}

template<typename T>
void NoheadSLinkedList<T>::insert(T data, int position)
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
	Node* p = new Node;
	p->data = data;
	Node* q = head;
	for (int i = 0; i < position - 2; i++)
		q = q->next;
	p->next = q->next;
	q->next = p;
	length++;
	return;
}

template<typename T>
void NoheadSLinkedList<T>::show()
{
	Node* p = head;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}