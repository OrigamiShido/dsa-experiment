#pragma once

#define WIN32_LEAN_AND_MEAN

#include <iostream>
#include "SingleLinkedList.h"

using namespace std;

class hashlist {
private:
	int length;
	SingleLinkedList<int>** baselist;
public:
	hashlist(int length = 10);
	~hashlist()
	{
		for (int i = ; i < length; i++)
		{
			delete[] baselist[i];
			delete[] baselist;
		}
	};
	int hash(int key);
	void insert(int key);
	void insertrange(int* arr, int length);
	const SingleLinkedList<int>* search(int key);
	bool contains(int key);
	bool remove(int key);
	void show()const;
};

hashlist::hashlist(int length)
{
	baselist = nullptr;
	this->length = length;
	baselist = new SingleLinkedList<int>*[length];
	for (int i = 0; i < length; i++)
	{
		baselist[i] = new SingleLinkedList<int>();
	}
}

int hashlist::hash(int key)
{
	return key % this->length;
}

void hashlist::insert(int key)
{
	int index = hash(key);
	baselist[index]->pushback(key);
}

void hashlist::insertrange(int* arr, int length)
{
	int index;
	for (int i = 0; i < length; i++)
	{
		index = hash(arr[i]);
		baselist[index]->pushback(arr[i]);
	}
}

const SingleLinkedList<int>* hashlist::search(int key)
{
	int index = hash(key);
	return baselist[index];
}

bool hashlist::contains(int key)
{
	int index = hash(key);
	return baselist[index]->iscontain(key);
}

