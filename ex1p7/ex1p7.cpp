#include<iostream>
#include<complex>
using namespace std;

int main(void)
{
	complex<double> c1(4.0, 5.0);
	complex<double> c2(3.8, 9.6);
	complex<double>c3 = c1 + c2;
	cout << c3 << endl;
	c3 = c1 - c2;
	cout << c3 << endl;
	c3 = c1 * c2;
	cout << c3 << endl;
	c3 = c1 / c2;
	cout << c3 << endl;
	bool test = (c1 == c2);
	cout << test << endl;
	return 0;
}