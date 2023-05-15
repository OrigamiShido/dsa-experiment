#include "../dsa/BTnode.h"
#include "../dsa/BTree.h"
#include <iostream>

using namespace std;

int main(void)
{
	int length = 10;
	int nodelist[10] = { 1,2,3,4,5,6,7,8,9,10 };
	BTree<int> target;
	target=byarray(nodelist, 10, target);
	cout << "Preorder:" << endl;
	target.preorder(target.getroot());
	cout << endl;
	cout << "Inorder:" << endl;
	target.inorder(target.getroot());
	cout << endl;
	cout << "Postorder:" << endl;
	target.postorder(target.getroot());
	cout << endl;
	cout << "Levelorder:" << endl;
	target.levelorder(target.getroot());
	return 0;
}
