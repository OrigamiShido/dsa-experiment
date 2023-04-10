#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "../dsa/funcs.h"

using namespace std;

int main(void)
{
	srand(time(NULL));
	vector<int> table = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
		table.push_back(rand());
	for(int i=0;i<5;i++)
		table.insert(begin(table), rand()%11);
	cout<<"线性表长度：" <<table.size() <<endl;
	for(const auto& element:table)
		cout << element << " ";
	return 0;
}