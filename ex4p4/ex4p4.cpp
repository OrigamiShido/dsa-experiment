#include <iostream>
#include "../dsa/SingleLinkedList.h"
#include "../dsa/classes.h"
#include <cstdlib>

using namespace std;

int main(void)
{
	SingleLinkedList<CStu> studentlist;
	studentlist.pushback(CStu(20232023, "张三", 18, 100));
	studentlist.pushback(CStu(20232024, "李四" ,18,100));
	studentlist.pushback(CStu(20232025, "王五" ,18,100));
	studentlist.pushback(CStu(20232026, "赵六" ,18,100));
	studentlist.pushback(CStu(20232027, "孙七" ,18,100));
	studentlist.pushback(CStu(20232028, "周八" ,18,100));
	studentlist.pushfront(CStu(20232022, "李二" ,18,100));
	studentlist.remove(3);
	studentlist.insert(CStu(20232029, "吴九" ,18,100), 3);
	cout << "此线性表数据个数为：" << studentlist.size() << "个。" << endl;
	cout << "此线性表第3个数据为：" << studentlist.getdata(3) << endl;
	studentlist.show();
	return 0;
}