#include <iostream>
#include "../dsa/SequencedList.h"
#include "../dsa/funcs.h"

using namespace std;

int main(void)
{
	int a[50] = { 0 };
	RandomDataSet(a, 50, 0, 0, 100);
	SequencedList<int> list(50);
	list.copy(a, 50);
	list.show();
	list.pushback(114514);
	list.pushback(1919810);
	list.insert(810975, 6);
	cout << endl;
	list.show();
	return 0;
}