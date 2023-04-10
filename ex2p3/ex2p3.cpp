#include <iostream>
#include <vector>
#include "../dsa/classes.h"

using namespace std;

int main(void)
{
	vector<CStu> vStu;
	CStu stu1(20232022, "张三", 18, 100);
	vStu.push_back(stu1);
	vStu.push_back(CStu(20232023, "李四", 19, 99));
	vStu.push_back(CStu(20232024, "王五", 20, 98));
	vStu.insert(begin(vStu)+1, CStu(20232025, "赵六", 21, 97));
	vStu.insert(begin(vStu)+1, CStu(20232026, "孙七", 22, 96));
	cout << "这个线性表的长度为：" << vStu.size() << endl;
	for (const auto& stu : vStu)
	{
		cout << stu << endl;
	}
}