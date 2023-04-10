#pragma once

#define WIN32_LEAN_AND_MEAN             // 从 Windows 头文件中排除极少使用的内容

#include <iostream>
using namespace std;

template<typename T>
class SequencedList {
private:
	T* data;
	int length;
	int maxsize;
public:
	SequencedList(int size = 10);
	~SequencedList()
	{
		delete[]data;
	}
	T& operator[](int position)
	{
		if (position >= length || position < 0)
		{
			cout << "超出范围。" << endl;
			return data[0];
		}
		return data[position];
	}
	void pushback(T value);
	void insert(T value, int position);
	void judge();
	int size();
	void remove(int position);
	void copy(T* target, int arraylength);
	void show();
};

template<typename T>
void SequencedList<T>::judge()
{
	if (length == maxsize)
	{
		T* temp = new T[maxsize * 2];
		for (int i = 0; i < length; i++)
		{
			temp[i]=data[i];
		}
		delete[]data;
		data = temp;
		maxsize *= 2;
		return;
	}
}

template <typename T>
inline SequencedList<T>::SequencedList(int size)
{
	data = new T[size];
	maxsize = size;
	length = 0;
}

template <typename T>
inline void SequencedList<T>::pushback(T value)
{
	judge();
	data[length] = value;
	length++;
}

template <typename T>
inline void SequencedList<T>::insert(T value, int position)
{
	if (position < 0 || position > length)
	{
		cout << "超出范围。" << endl;
		return;
	}
	judge();
	for (int i = length; i > position; i--)
	{
		data[i] = data[i - 1];
	}
	data[position] = value;
	length++;
}

template<typename T>
int SequencedList<T>::size()
{
	return length;
}

template<typename T>
void SequencedList<T>::remove(int position)
{
	if (position < 0 || position > length)
	{
		cout << "超出范围。" << endl;
		return;
	}
	for (int i = position; i < length; i++)
	{
		data[i] = data[i + 1];
	}
	length--;
}

template<typename T>
void SequencedList<T>::copy(T* target, int arraylength)
{
	if (arraylength + length > maxsize)
	{
		T* temp = new T[arraylength + length];
		for (int i = 0; i < length; i++)
		{
			temp[i] = data[i];
		}
		delete[]data;
		data = temp;
		maxsize = arraylength + length;
	}
	for (int i = 0; i < arraylength; i++)
		data[length + i] = target[i];
	length += arraylength;
	return;
}

template<typename T>
void SequencedList<T>::show()
{
	for (int i = 0; i < length; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}
