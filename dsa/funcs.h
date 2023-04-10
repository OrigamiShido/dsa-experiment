#pragma once

#define WIN32_LEAN_AND_MEAN             // 从 Windows 头文件中排除极少使用的内容
#include <iostream>
#include <ctime>
#include <cstddef>

using namespace std;

void RandomDataSet(int* target, int length, unsigned int seed = 1, int minnum = -99, int maxnum = 100);
int RandomNum(int min = 0, int max = 99,int seed=time(NULL));

template<typename T>
void Showarray(T* target, int length);

template<typename T>
void Showarray(T* target, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << target[i] << " ";
	}
	cout << endl;
	return;
}
