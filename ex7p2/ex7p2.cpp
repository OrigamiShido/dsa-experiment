#include "../dsa/BTree.h"
#include "../dsa/BTnode.h"
#include <iostream>

using namespace std;

int main(void)
{
	BTnode<int>* nodelist[10];
	for (int i = 0; i < 10; i++)
		nodelist[i] = new BTnode<int>(i + 1);
	BTree<int> nodetree;
	nodetree.setroot(nodelist[0]);
	nodetree.getroot()->setleft(nodelist[1]);
	nodetree.getroot()->setright(nodelist[2]);
	nodetree.getroot()->getleft()->setleft(nodelist[3]);
	nodetree.getroot()->getleft()->setright(nodelist[4]);
	nodetree.getroot()->getright()->setleft(nodelist[5]);
	nodetree.getroot()->getright()->setright(nodelist[6]);
	nodetree.getroot()->getleft()->getleft()->setleft(nodelist[7]);
	nodetree.getroot()->getleft()->getleft()->setright(nodelist[8]);
	nodetree.getroot()->getleft()->getright()->setleft(nodelist[9]);
	cout << "Preorder: ";
	nodetree.preorder(nodetree.getroot());
	cout << endl;
	cout << "Inorder: ";
	nodetree.inorder(nodetree.getroot());
	cout << endl;
	cout << "Postorder: ";
	nodetree.postorder(nodetree.getroot());
	cout << endl;
	cout << "Levelorder: ";
	nodetree.levelorder(nodetree.getroot());
	cout << endl;
	return 0;
}