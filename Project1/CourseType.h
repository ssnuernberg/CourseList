/*
	Group_Chocolate
	Do, Nicholas
	Nuernberg, Samantha
	Nguyen, Ben

	CS A250
	May 14, 2019

	Project 2
*/

#ifndef COURSETYPE_H
#define COURSETYPE_H

#include <string>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class CourseType
{
public:
	CourseType();
	CourseType(const string&,int,double);
	
	string getCourseName() const;
	int getCourseNumber() const;
	double getCourseUnits() const;
	static const string& getPrefix();
	
	void setCourseName(const string&);
	void setCourseNumber(int);
	void setCourseUnits(double);

	void printCourse() const;	
	
	~CourseType();
private:
	static const string PREFIX;
	string courseName;
	int courseNumber;
	double courseUnits;
};
#endif