#include <iostream>
#include "../dsa/funcs.h"

using namespace std;

int main(void)
{
	int* randomnumber = new int[30];
	int length = 30;
	RandomDataSet(randomnumber, length, 1, -99, 99);
	int bar = 50;
	auto address = find(randomnumber, randomnumber + length, bar);
	if (address != randomnumber + length)
		cout << "数组内存在值为" << bar << "的数。" << endl;
	else
		cout << "数组内不存在值为" << bar << "的数。" << endl;

	int min = 40, max = 90;
	auto result = find_if(randomnumber, randomnumber + length, [=](int a) {return a > min && a < max; });
	if (result != randomnumber + length)
		cout << "数组内第一个大于" << min << "小于" << max << "的数：" << *result << "." << endl;
	else
		cout << "数组内没有大于" << min << "小于" << max << "的数。" << endl;
	delete[] randomnumber;
	return 0;
}