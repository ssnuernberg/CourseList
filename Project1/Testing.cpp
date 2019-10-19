/*
	Group_Chocolate
	Do, Nicholas
	Nuernberg, Samantha
	Nguyen, Ben

	CS A250
	May 14, 2019

	Project 2
*/

#include "Testing.h"

void createCourseList(CourseList& courseList)
{
	string name;
	int number = 0;
	double units = 0.0;
	vector<int> prereqs;
	char transfers;

	for (int i = 0; i < TOTAL_CLASSES; ++i)
	{
		getData(name, number, units, prereqs, transfers, i);
		courseList.addCourse(name, number, units, prereqs, transfers);
	}

}