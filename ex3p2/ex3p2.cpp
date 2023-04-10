#include <iostream>
#include <algorithm>
#include "../dsa/classes.h"

int main(void)
{
	Robot robotarray[10] = { Robot(1001,"A1",200),Robot(1002,"A2",185),Robot(1003,"A3",166),Robot(1004,"A4",189),Robot(1005,"A5",179),Robot(1006,"B1",149) ,Robot(1007,"B2",109) ,Robot(1008,"B3",199) ,Robot(1009,"B4",15) ,Robot(1010,"00",1000000) };
	Robot* p = robotarray;

	cout << "sort with id:" << endl;
	robotarray->RobotSort(robotarray, 10, "id");
	for (int i = 0; i < 10; i++)
	{
		robotarray->show(robotarray[i]);
	}

	cout << endl << "sort with iq:" << endl;
	robotarray->RobotSort(robotarray, 10, "iq");
	for (int i = 0; i < 10; i++)
	{
		robotarray->show(robotarray[i]);
	}

	cout << endl << "sort with name : " << endl;
	robotarray->RobotSort(robotarray, 10, "name");
	for (int i = 0; i < 10; i++)
	{
		robotarray->show(robotarray[i]);
	}
	return 0;
}