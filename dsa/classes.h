#pragma once

#define WIN32_LEAN_AND_MEAN     // 从 Windows 头文件中排除极少使用的内容
#include <string>
#include <iostream>
using namespace std;

class CStu
{
private:
	int id;
	string name;
	float age;
	double score;
public:
	CStu();
	CStu(int sid, string sname, float sage, double sscore);
	
	friend ostream& operator<<(ostream& out, const CStu& object) {
		out << object.id << '\t' << object.name << '\t' << object.age << '\t' << object.score;
		return out;
	}

	void operator=(const CStu origin)
	{
		id = origin.id;
		name = origin.name;
		age = origin.age;
		score = origin.score;
	}

	void set(int sid, string sname, float sage, double sscore)
	{
		sid = id;
		sname = name;
		sage = age;
		sscore = score;
	}

	~CStu() {};
};

CStu::CStu(int sid, string sname, float sage, double sscore)
{
	id = sid;
	name = sname;
	age = sage;
	score = sscore;
}

CStu::CStu()
{
	id = 0;
	name = "空";
	age = 0;
	score = 0;
}