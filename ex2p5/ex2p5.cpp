#include <iostream>
#include "../dsa/classes.h"
#include "../dsa/funcs.h"

using namespace std;

int main(void)
{
	int* arrayint = new int[5];
	RandomDataSet(arrayint, 5);
	CStu studentlist[5]={{20222023,"张三",18,100},{20222024,"李四",19,99},{20222025,"王五",20,98},{20222026,"赵六",21,97},{20222027,"孙七",22,96}};
	Showarray(arrayint, 5);
	for (int i = 0; i < 5; i++)
		cout << studentlist[i] << endl;
	delete[] arrayint;
	return 0;
}