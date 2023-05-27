#include <iostream>
#include "../dsa/LinearSearch.h"
#include "../dsa/funcs.h"
#include <algorithm>

using namespace std;

int main(void)
{
	int *array=new int[10000];
	RandomDataSet(array, 10000, 114514, 0, 9999);
	int result;
	for (int i = 5; i <= 195; i += 10)
	{
		result = linearsearch(array, 10000, i);
		cout << result << endl;
	}
	cout << endl;
	sort(array, array + 10000);
	for (int i = 5; i <= 195; i += 10)
	{
		result = binarysearch(array, 10000, i);
		cout << result << endl;
	}
	cout << endl;
	for (int i = 5; i <= 195; i += 10)
	{
		bool ishave;
		ishave = binary_search(array, array+10000, i);
		cout << ishave << endl;
	}
	//Showarray(array, 10000);
	delete[] array;
	return 0;
}