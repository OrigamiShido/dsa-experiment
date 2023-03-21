#include <iostream>
#include <algorithm>
#include <cmath>
#include "../dsa/funcs.h"
//#include "../dsa/funcs.cpp"

using namespace std; 

int main(void)
{
	int randomdata[20] = { 0 };
	int length = 20;
	RandomDataSet(randomdata, length, 1, -99, 99);
	Showarray(randomdata, length);
	cout << "排序后：" << endl;
	sort(randomdata, randomdata+length);
	Showarray(randomdata, length);
	cout << "按绝对值排序后：" << endl;
	sort(randomdata, randomdata + length, [](int x, int y) {return fabs(x) < fabs(y); });
	Showarray(randomdata, length);
	return 0;
}