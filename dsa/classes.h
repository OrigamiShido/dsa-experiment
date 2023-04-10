#pragma once

#define WIN32_LEAN_AND_MEAN     // 从 Windows 头文件中排除极少使用的内容
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

//CStu start

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
	//CStu(CStu& origin);

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

	void set(int& sid, string& sname, float& sage, double& sscore)
	{
		id = sid;
		name = sname;
		age = sage;
		score = sscore;
	}

	string str();
	void show(CStu &target);

	~CStu() {};
};

inline CStu::CStu(int sid, string sname, float sage, double sscore)
{
	id = sid;
	name = sname;
	age = sage;
	score = sscore;
}

inline CStu::CStu()
{
	id = 0;
	name = "空";
	age = 0;
	score = 0;
}

/*inline CStu::CStu(CStu& origin)
{
	this.id = origin.id;
	this.name = origin.name;
	this.age = origin.age;
	this.score = origin.score;
}*/

//CStu end

//Robot Start
class Robot {
private:
	int _id;
	string _name;
	double _iq;
public:
	Robot();
	Robot(int id, string name, double iq);

	friend ostream& operator<<(ostream& out, const Robot& object) {
		out << object._id << '\t' << object._name << '\t' << object._iq ;
		return out;
	}

	void RobotSort(Robot* robotarray, int length, string sorttype);
	void show(Robot& target);
	~Robot() {};
};

inline Robot::Robot(int id, string name, double iq)
{
	_id = id;
	_name = name;
	_iq = iq;
}

inline Robot::Robot()
{
	_id = 0;
	_name = "无";
	_iq = 0;
}
//Robot End