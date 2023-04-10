#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main(void)
{
	queue<int> qtest;
	for (int i = 0; i < 10; i++)
		qtest.push(i);
	cout << "queue: ";
	queue<int> qpush(qtest);
	for (int i = 0; i < qtest.size(); i++)
	{
		cout << qpush.front() << " ";
		qpush.pop();
	}
	cout << endl;

	stack<int> stest;
	int length = qtest.size();
	for (int i = 0; i < length; i++)
	{
		stest.push(qtest.front());
		qtest.pop();
	}
	cout << "stack: ";
	stack<int> spush(stest);
	for (int i = 0; i < stest.size(); i++)
	{
		cout << spush.top() << " ";
		spush.pop();
	}
	cout << endl;

	return 0;
}