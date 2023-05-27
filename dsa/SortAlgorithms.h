#pragma once

#define WIN32_LEAN_AND_MEAN     // 从 Windows 头文件中排除极少使用的内容

#include <iostream>

using namespace std;

template <typename T>
T* insertsort(T* target, int length);
template <typename T>
T* insertsort(T* target, int length)
{
	for (int i = 1; i < length; i++)
	{
		T temp = target[i];
		int k = i - 1;
		while (k >= 0 && target[k] > temp)
		{
			target[k + 1] = target[k];
			k--;
		}
		target[k + 1] = temp;
	}
	return target;
}

template<typename T>
T* bubblesort(T* target, int length);
template<typename T>
T* bubblesort(T* target, int length)
{
	T temp;
	for (int i = 0; i < length; i++)
	{
		for (int k = 0; k < length - i-1; k++)
		{
			if (target[k+1] < target[k])
			{
				temp = target[k];
				target[k] = target[k + 1];
				target[k + 1] = temp;
			}
		}
	}
	return target;
}

template<typename T>
T* quicksort(T* target, int length);
template<typename T>
T* quicksort(T* target, int length)
{
	if (length <= 1)
		return target;
	int i = 0, j = length - 1;
	T temp = target[0];
	while (i < j)
	{
		while (i < j && target[j] >= temp)
			j--;
		target[i] = target[j];
		while (i < j && target[i] <= temp)
			i++;
		target[j] = target[i];
	}
	target[i] = temp;
	quicksort(target, i);
	quicksort(target + i + 1, length - i - 1);
	return target;
}

template<typename T>
T* selectsort(T* target, int length);
template<typename T>
T* selectsort(T* target, int length)
{
	for (int i = 0; i < length; i++)
	{
		int max = 0;
		for (int j = 0; j < length - i; j++)
		{
			if (target[j] > target[max])
				max = j;
		}
		T temp = target[max];
		target[max] = target[length - i - 1];
		target[length - i - 1] = temp;
	}
	return target;
}