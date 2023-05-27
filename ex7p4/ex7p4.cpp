#include "../dsa/BTnode.h"
#include "../dsa/BTree.h"
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s = "A(B(D(^,G),^),C(E,F(H,^)))";
	BTree<char> tree;
	byGlist((char*)s.data(), s.length(), &tree);
	cout << "Preorder: ";
	tree.preorder(tree.getroot());
	cout << endl;
	cout << "Inorder: ";
	tree.inorder(tree.getroot());
	cout << endl;
	cout << "Postorder: ";
	tree.postorder(tree.getroot());
	cout << endl;
	cout << "Levelorder: ";
	tree.levelorder(tree.getroot());
	cout << endl;
	return 0;
}