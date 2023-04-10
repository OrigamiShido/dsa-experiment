#pragma once

#define WIN32_LEAN_AND_MEAN     // 从 Windows 头文件中排除极少使用的内容

#include <iostream>

template<typename T>
class LinkedStack
{
private:
	struct Node
	{
		T data;
		Node* next;
	};
	Node* top;
	int size;
public:
	LinkedStack();
	~LinkedStack() 
	{
		while (top->next != NULL)
		{
			Node* temp = top->next;
			top->next = temp->next;
			delete temp;
		}
		delete top;
	};
	void push(T data);
	T pop();
	T peek();
	int getSize();
	bool isEmpty();
	void show();
};

template<typename T>
LinkedStack<T>::LinkedStack()
{
	top = nullptr;
	size = 0;
}

template<typename T>
void LinkedStack<T>::push(T data)
{
	Node* newdata = new Node;
	newdata->next = NULL;
	newdata->data = data;
	if (top->next != NULL)
	{
		newdata->next = top->next;
		top->next = newdata;
	}
	else
	{
		top->next = newdata;
		newdata->next = NULL;
	}
	size++;
	return;
}

template<typename T>
bool LinkedStack<T>::isEmpty()
{
	if (top->next == NULL)
		return true;
	else
		return false;
}

template <typename T>
T LinkedStack<T>::peek()
{
	return top->next->data;
}

template<typename T>
T LinkedStack<T>::pop()
{
	Node* temp = top->next;
	T data = temp->data;
	top->next = temp->next;
	delete temp;
	return data;
}

template<typename T>
int LinkedStack<T>::getSize()
{
	return size;
}

template <typename T>
void LinkedStack<T>::show()
{
	cout << "栈头--" << ;
	Node* p = top->next;
	while (p->next != NULL)
	{
		cout << p->data << " ";
	}
	cout << "--栈尾" << endl;
}