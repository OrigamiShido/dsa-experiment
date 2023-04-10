#include <iostream>
#include "../dsa/SingleLinkedList.h"

using namespace std;

int main(void)
{
	cout << "请输入共有多少犯人：" << endl;
	int num;
	cin >> num;
	cout << "请输入报数：" << endl;
	int deathnum;
	cin >> deathnum;
	SingleLinkedList<int> deathlist;
	for (int i = 0; i < num; i++)
		deathlist.pushback(i + 1);
	int count = 0;
	while (deathlist.size() > deathnum - 1)
	{
		for (int i = 0; i < deathnum; i++)
		{
			count++;
			if (count > deathlist.size())
				count -= deathlist.size();
		}
		deathlist.remove(count);
		count--;
	}
	cout << "最后剩下的犯人是：";
	for (int i = 0; i < deathnum - 1; i++)
		cout << deathlist.getdata(i + 1) << " ";
	cout << endl;
	return 0;
}