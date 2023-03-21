#include <iostream>
#include "../dsa/classes.h"
#include <vector>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
	srand(1);
	vector<int> table;
	for (int i = 0; i < 10; i++)
		table.push_back(rand());
	for (int i = 0; i < 5; i++)
		table.insert(begin(table), rand());
	for (auto& element : table)
		cout << element << " ";
	cout << endl << endl;
	//part 1

	vector<CStu> students;
	string test = "李华";
	CStu studentlist[]={ {20232023, test, 24.0, 99.9}, {22022321, "刘刚", 22, 89.9}, { 978145,"张伟",19,88.8 } };
	for (const auto& student : studentlist)
		students.push_back(student);
	for (int i = 2; i >= 0; i--)
		students.insert(begin(students), studentlist[i]);
	for (const auto& student : students)
		cout << student << endl;
	//part 2

	return 0;
}