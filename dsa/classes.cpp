#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include "classes.h"
#include "pch.h"

using namespace std;
//CStu start

string CStu::str()
{
	ostringstream oss;
	oss << id << '-' << name << '-' << age << '-' << score;
	//string str = to_string(id) + '\t' + name + '\t' + to_string(age) + '\t' + to_string(score);
	//return str;
	return oss.str();
}

void CStu::show(CStu &target)
{
	cout << target << endl;
}
//CStu end

//Robot Start
void Robot::RobotSort(Robot* robotarray, int length, string sorttype)
{
	if (sorttype == "id")
	{
		sort(robotarray, robotarray + length, [](Robot& a, Robot& b) {return a._id < b._id; });
	}
	else if (sorttype == "iq")
	{
		sort(robotarray, robotarray + length, [](Robot& a, Robot& b) {return a._iq < b._iq; });
	}
	else if (sorttype == "name")
	{
		sort(robotarray, robotarray + length, [](Robot& a, Robot& b) {return a._name < b._name; });
	}
}

void Robot::show(Robot& target)
{
	cout << target << endl;
}
//Robt End