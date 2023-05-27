#include <iostream>
#include "../dsa/SortAlgorithms.h"
#include "../dsa/funcs.h"

using namespace std;

int main(void)
{
	int a[50] = { 0 };
	RandomDataSet(a, 50, 1, 0, 100);
	Showarray(a, 50);
	cout << "insertsort:" << endl;
	insertsort(a, 50);
	Showarray(a, 50);
	cout << endl;

	RandomDataSet(a, 50, 1, 0, 100);
	Showarray(a, 50);
	cout << "bubblesort:" << endl;
	bubblesort(a, 50);
	Showarray(a, 50);
	cout << endl;

	RandomDataSet(a, 50, 1, 0, 100);
	Showarray(a, 50);
	cout << "quicksort:" << endl;
	quicksort(a, 50);
	Showarray(a, 50);
	cout << endl;

	RandomDataSet(a, 50, 1, 0, 100);
	Showarray(a, 50);
	cout << "selectsort:" << endl;
	selectsort(a, 50);
	Showarray(a, 50);
	return 0;
}