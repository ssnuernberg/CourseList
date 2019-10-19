/*
	Group_Chocolate
	Do, Nicholas
	Nuernberg, Samantha
	Nguyen, Ben

	CS A250
	May 14, 2019

	Project 2
*/

#ifndef COURSE_H
#define COURSE_H

#include "CourseType.h"

class Course : public CourseType
{
public:
	Course();
	Course(const string&, int, double ,const vector<int>&, const char&);

	bool isTransferable() const;
	bool operator==(int num) const;

	void setTransfer(char);
	void setPrerequisites(int[], int);

	void printCourse() const;
	void printPrereqs() const;

	~Course();
private:
	vector<int> preReqs;
	char canTransfer;
};
#endif 