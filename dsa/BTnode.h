#pragma once

#define WIN32_LEAN_AND_MEAN
#include <iostream>

using namespace std;

template<typename T>
class BTnode {
private:
	T data;
	BTnode<T>* left;
	BTnode <T>* right;
public:
	BTnode(T data, BTnode<T>* left = NULL, BTnode<T>* right = NULL) :data(data), left(left), right(right) {}
	BTnode() { data = 0; left = NULL; right = NULL; }
	~BTnode() {}
	T getdata() { return data; }
	BTnode<T>* getleft() { return left; };
	BTnode<T>* getright() { return right; };
	void setdata(T data) { this->data = data; }
	void setleft(BTnode<T>* left) { this->left = left; }
	void setright(BTnode<T>* right) { this->right = right; }
};