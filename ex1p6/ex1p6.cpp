#include <iostream>

using namespace std;

template<typename T>
void myswap(T &a, T &b);

int main(void)
{
	int a = 1, b = 2;
	float c = 5.5, d = 10.1;
	cout << a << " " << b << endl;
	myswap(a, b);
	cout << a << " " << b << endl;
	cout << c << " " << d << endl;
	myswap(c, d);
	cout << c << " " << d << endl;
}

template<typename T>
void myswap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
	return;
}