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

const string CourseType::PREFIX = "CS A";

// Default constructor
CourseType::CourseType() {
	courseName = "No name assigned";
	courseNumber = 0;
	courseUnits = 0.0;
}

// Overloaded constructor
CourseType::CourseType(const string& name, int num, double unit) {
	courseName = name;
	courseNumber = num;
	courseUnits = unit;
}

// Declaration function getCourseName
string CourseType::getCourseName() const {
	return courseName;
}

// Declaration function getCourseNumber
int CourseType::getCourseNumber() const {
	return courseNumber;
}

// Declaration function getCourseUnits
double CourseType::getCourseUnits() const {
	return courseUnits;
}

// Declaration function getPrefix
const string& CourseType::getPrefix()
{
	return PREFIX;
}

// Declaration function setCourseName
void CourseType::setCourseName(const string& text) {
	courseName = text;
}

// Declaration function setCourseNumber
void CourseType::setCourseNumber(int num) {
	courseNumber = num;
}

// Declaration function setCourseUnits
void CourseType::setCourseUnits(double num) {
	courseUnits = num;
}
// Declaration function printCourse
void CourseType::printCourse() const {
	cout << fixed << showpoint << setprecision(2);
	cout << PREFIX << courseNumber << " - " 
		<< courseName << " (" << courseUnits << " units)" << endl;
}
// Destructor
CourseType::~CourseType() {

}
