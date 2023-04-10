#pragma once

#define WIN32_LEAN_AND_MEAN     // �� Windows ͷ�ļ����ų�����ʹ�õ�����

#include <iostream>
using namespace std;

template<typename T>
class SequencedStack
{
private:
	T* data;
	int top;
	int maxSize;
public:
	SequencedStack(int size = 10);
	~SequencedStack() {
		delete data;
	};

	void Push(T x);
	T Pop();
	T GetTop();
	bool IsEmpty();
	bool IsFull();
	void MakeEmpty();
	int Peek();
	void Show();
	void Enlarge();
};

template<typename T>
SequencedStack<T>::SequencedStack(int size)
{
	data = new T[size];
	maxSize = size;
	top = -1;
}

template<typename T>
bool SequencedStack<T>::IsEmpty()
{
	if (top == -1)
		return true;
	else
		return false;
}

template<typename T>
bool SequencedStack<T>::IsFull()
{
	if (top + 1 == maxSize)
		return true;
	else
		return false;
}

template<typename T>
void SequencedStack<T>::Push(T x)
{
	if (IsFull())
	{
		cout << "ջ������" << endl;
		cout << "�Ƿ�����ջһ������y/n��";
		char c;
		cin >> c;
		if (c == 'y' || c == 'Y')
		{
			Enlarge();
		}
		else
			return;
	}
	data[++top] = x;
}

template<typename T>
T SequencedStack<T>::Pop()
{
	if (IsEmpty())
	{
		cout << "ջ�ѿգ�" << endl;
		return NULL;
	}
	return data[top--];
}

template<typename T>
T SequencedStack<T>::GetTop()
{
	if (IsEmpty())
	{
		cout << "ջ�ѿգ�" << endl;
		return NULL;
	}
	return data[top];
}

template<typename T>
int SequencedStack<T>::Peek()
{
	return top + 1;
}

template<typename T>
void SequencedStack<T>::Show()
{
	cout << "ջͷ--";
	for (int i = 0; i <= top; i++)
	{
		cout << data[i] << " ";
	}
	cout << "--ջβ" << endl;
}

template<typename T>
void SequencedStack<T>::MakeEmpty()
{
	top = -1;
}

template<typename T>
void SequencedStack<T>::Enlarge()
{
	T* temp = new T[maxSize * 2];
	for (int i = 0; i < maxSize; i++)
	{
		temp[i] = data[i];
	}
	delete data;
	data = temp;
	maxSize *= 2;
}