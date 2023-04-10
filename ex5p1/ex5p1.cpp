#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void)
{
	cout << "请输入想要分解进制的数字：" << endl;
	int num;
	cin >> num;
	cout << "请输入想要分解的进制：" << endl;
	int key;
	cin >> key;
	stack<char> targetstack;
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (num > 0)
	{
		if (num % key >= 10 && num % key <= 36)
		{
			targetstack.push(alphabet[num % key - 10]);
		}
		else
			targetstack.push((char)((num % key) + '0'));
		num /= key;
	}
	cout << "分解后的" << key << "进制数字为：";
	while (!targetstack.empty())
	{
		cout << targetstack.top();
		targetstack.pop();
	}
	cout << endl;
	return 0;
}