/*
	Group_Chocolate
	Do, Nicholas
	Nuernberg, Samantha
	Nguyen, Ben

	CS A250
	May 14, 2019

	Project 2
*/

#include "CourseType.h"		
#include "Course.h"
#include "CourseList.h"
#include "Testing.h"
#include "TestingCases.h"
#include "Interface.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	/********************************************************
	*	TESTING database
	********************************************************/
	system("Color 0A");

	CourseList courseList;
	createCourseList(courseList);

	if (!courseList.isEmpty())
	{
		displayMenu();
		processChoice(courseList);
	}
	else
	{
		cerr << " => There are no courses in the list." << endl;
	}

	cout << endl;
	system("Pause");
	return 0;
}