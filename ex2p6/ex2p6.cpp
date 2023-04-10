#include <iostream>
#include "..\dsa\classes.h"
#include <vector>
#include <string>

int main(void)
{
	vector<CStu> studentlist = { CStu(20222023,"张三",18,100),CStu(20222024,"李四",19,99),CStu(20222025,"王五",20,98),CStu(20222026,"赵六",21,97),CStu(20222027,"孙七",22,96) };
	cout << "vector cout:" << endl;
	for (const auto& student : studentlist)
		cout << student << endl;
	cout << endl << "string cout:" << endl;
	for (auto& student : studentlist)
		cout << student.str() << endl;
	cout << endl;
	return 0;
}