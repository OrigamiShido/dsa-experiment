#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	vector<string> sayhello = { "Hello","C++","World","!" };
	if (argc == 3)
	{
		cout << "你输入的两个整数分别为：" << argv[1] << "和" << argv[2] << endl;
		cout << "他们的和为：" << stoi(argv[1]) + stoi(argv[2]) << endl;
	}
	
	for (const auto& word : sayhello)
	{
		cout << word << " ";
	}
	cout << endl;
	
	return 0;
}