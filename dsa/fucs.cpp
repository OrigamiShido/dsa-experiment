// dsa.cpp : 定义静态库的函数。
/*使用函数模板的过程中，在类里面定义了一个函数模板，按照普通的类的定义方式，将声明放在了.h文件中，将函数体放在了.cpp文件中，即模板函数的声明和定义分开，编译的时候出现了“无法解析的外部符号”的问题---- - C++编译器不支持模板的分离式编译。
当我们声明和定义一个模板的时候，必须要让声明和定义放在一个文件里，否则编译器会报错。

解决方法：

1.将类的声明和定义放在同一个.h文件中。
2.在类模板出现的cpp文件对应的.h文件中include.cpp文件。
3.在主函数所在的main.h中include.cpp文件。
————————————————
版权声明：本文为CSDN博主「Zhninu」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https ://blog.csdn.net/zjy1175044232/article/details/121954038*/

#include "pch.h"
#include "funcs.h"
#include <cstdlib>
#include <iostream>
using namespace std;

template<typename T>
void Showarray(T* target, int length);

void RandomDataSet(int* target, int length,unsigned int seed, int minnum, int maxnum)
{
	srand(seed);
	for (int i = 0; i < length; i++)
	{
		int randomnum = (rand() % (maxnum - minnum + 1)) + minnum;
		target[i] = randomnum;
	}
	return;
}