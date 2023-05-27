#include <iostream>
#include <map>
#include <algorithm>
#include "../dsa/funcs.h"
#include "../dsa/LinearSearch.h"

using namespace std;


int main(void)
{
	int* array = new int[20000];
	RandomDataSet(array, 20000, 141411, 0, 20000);
	map<int, int> searchmap;
	//for (int i = 0; i < 20000; i++)
	{
		//searchmap.insert(i, array[i]);
	}
	int result = 0;
	for (int i = 500; i < 20000; i += 1000)
	{
		result = linearsearch(array, 10000, i);
		cout << result << endl;
	}
	cout << endl;
	sort(array, array + 20000);
	for (int i = 500; i <= 19500; i += 1000)
	{
		result = binarysearch(array, 10000, i);
		cout << result << endl;
	}
	cout << endl;
	for (int i = 500; i < 20000; i += 1000)
	{
		map<int, int>::iterator it;
		it = searchmap.find(i);
		if (it != searchmap.end())
			cout << it->second << endl;
	}
	delete[] array;
}














/*
void CreateMap(map<int, int>& dic, const int* a, int len);
void CreateMapUnordered(unordered_map<int, int>& dic, const int* a, int len);

int main(void)
{
	const int CNT = 20000;
	const int SNUMS = 20;
	int va[SNUMS]{ 500, 1500, 2500, 3500, 4500, 5500, 6500, 7500, 8500, 9500, 10500, 11500, 12500, 13500, 14500, 15500, 16500, 17500, 18500, 19500 };
	int ia[SNUMS]{ -1 };
	struct timespec ts;
	long startTime, endTime;
	int* searchBuff = new int[CNT];
	for (int i = 0; i < CNT; i++) searchBuff[i] = i;
	// RandomizeData(va, SNUMS, 9, 10000, 30000); // seed=9，[10000,30000)
	cout << "排序数据用二分查找算法 ： ";
	// Show(a, CNT);
	cout << endl;
	timespec_get(&ts, TIME_UTC);    startTime = ts.tv_nsec;
	for (int i = 0; i < SNUMS; i++) {
		ia[i] = BinarySearch(searchBuff, searchBuff + CNT, va[i]);
	}
	timespec_get(&ts, TIME_UTC);    endTime = ts.tv_nsec;
	for (int i = 0; i < SNUMS; i++) {
		cout << "值为" << va[i] << "的元素位置是: " << ia[i] << endl;
	}
	cout << "二分查找 Elapsed time = " << endTime - startTime << " ns" << endl;

	cout << "用哈希查找算法 ： " << endl;
	random_shuffle(searchBuff, searchBuff + CNT);
	// map<int, int> mymap; CreateMap(mymap, searchBuff, CNT);
	unordered_map<int, int> mymap; CreateMapUnordered(mymap, searchBuff, CNT);
	timespec_get(&ts, TIME_UTC);    startTime = ts.tv_nsec;
	for (int i = 0; i < SNUMS; i++) {
		ia[i] = mymap[va[i]];   // [ ]中的va[i]是被查找的键，返回其值
	}
	timespec_get(&ts, TIME_UTC);    endTime = ts.tv_nsec;
	for (int i = 0; i < SNUMS; i++) {
		cout << "值为" << va[i] << "的元素位置是: " << ia[i] << endl;
	}
	cout << "哈希查找 Elapsed time = " << endTime - startTime << " ns" << endl;

	HashList hlist(CNT / 2);
	hlist.insert_range(searchBuff, CNT);
	bool bFound[SNUMS]{ false };
	cout << "自定义哈希查找算法 ： " << endl;
	timespec_get(&ts, TIME_UTC);
	startTime = ts.tv_nsec;
	for (int i = 0; i < SNUMS; i++) {
		bFound[i] = hlist.contains(va[i]);
	}
	// endTime = clock();  //计时结束
	// endTime = GetTickCount();//计时结束
	timespec_get(&ts, TIME_UTC);
	endTime = ts.tv_nsec;
	for (int i = 0; i < SNUMS; i++) {
		cout << "哈希表中包含值为" << va[i] << "的元素？ " << bFound[i] << endl;
	}
	cout << "自定义哈希查找 Elapsed time = " << endTime - startTime << " ns" << endl;


	delete[] searchBuff;
}


void CreateMap(map<int, int>& dic, const int* a, int len) {
	for (int i = 0; i < len; i++) {
		// dic.insert(map<int, int>::value_type(i, i));
		dic[a[i]] = i;           // a[i]是被查找的键，i是其值
		// dic[i] = a[i];           // i是被查找的键，a[i]是其值
	}
}
void CreateMapUnordered(unordered_map<int, int>& dic, const int* a, int len) {
	for (int i = 0; i < len; i++) {
		// dic.insert(unordered_map<int, int>::value_type(i, i));
		dic[a[i]] = i;           // a[i]是被查找的键，i是其值
		// dic[i] = a[i];           // i是被查找的键，a[i]是其值
	}
}
*/