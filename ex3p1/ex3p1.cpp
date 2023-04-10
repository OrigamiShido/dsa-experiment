#include <iostream>
#include <algorithm>
#include "../dsa/funcs.h"

int main(void)
{
	int array[20] = { 0 };
	int* parray = array;
	RandomDataSet(array, 20, 1, -99, 99);
	sort(parray, parray + 20);
	Showarray(array, 20);

	RandomDataSet(array, 20, 1, -99, 99);
	sort(parray, parray + 20, [](int a, int b) {return abs(a) < abs(b); });
	Showarray(array, 20);

	return 0;
}