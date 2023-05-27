#pragma once

#define WIN32_LEAN_AND_MEAN

#include <iostream>

using namespace std;

template<typename T>
int linearsearch(T* arr, int length, T target);

template<typename T>
int linearsearch(T* arr, int length, T target)
{
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == target)
			return i;
	}
	return -1;
}

template<typename T>
bool iscontain(T* arr, int length, T target);

template<typename T>
bool iscontain(T* arr, int length, T target)
{
	int result = linearsearch(arr, length, target);
	if (result == -1)
		return false;
	else
		return true;
}

template <typename T>
int binarysearch(T* arr, int length, T target);

template <typename T>
int binarysearch(T* arr, int length, T target)
{
	int start = 0, end = length - 1, mid = (start + end) / 2;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (target == arr[mid])
			return mid;
		else if (target < arr[mid])
			end = mid - 1;
		else if (target > arr[mid])
			start = mid + 1;
	}
	if (target > arr[mid])
		mid++;
	return ~mid;
}
