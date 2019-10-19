/*
	Group_Chocolate
	Do, Nicholas
	Nuernberg, Samantha
	Nguyen, Ben

	CS A250
	May 14, 2019

	Project 2
*/

#include "Course.h"

Course::Course()
{
	canTransfer = 'N';
}

Course::Course(const string& text, int num, double units, 
	const vector<int>& vectorPrerequires, const char& isTransferable) 
	: CourseType(text, num, units)
{
	preReqs = vectorPrerequires;
	canTransfer = isTransferable;
}

bool Course::isTransferable() const
{
	return canTransfer == 'Y';
}

void Course::setTransfer(char newTransfer)
{
	canTransfer = newTransfer;
}

void Course::setPrerequisites(int pre[], int numOfElements)
{
	preReqs.clear();
	preReqs.assign(pre, pre + numOfElements);
}

void Course::printCourse() const
{
	cout << fixed << showpoint << setprecision(2);
	cout << getPrefix() << getCourseNumber() << " - " 
		<< getCourseName() << " (" << getCourseUnits() << " units, " 
		<< ((canTransfer == 'Y') ? "transferable" : "not transferable") << ")" << endl;
}

void Course::printPrereqs() const
{
	cout << getPrefix() << getCourseNumber() << " Prerequistites: ";

	int len = static_cast<int>(preReqs.size());
	if (len == 0)
		cout << "none";

	for (int i = 0; i < len; ++i) {
		if (len == 1 || i == len - 1)
			cout << getPrefix() << preReqs.at(i);
		else {
			cout << getPrefix() << preReqs.at(i) << " and ";
		}
	}

	cout << endl;
}

bool Course::operator==(int num) const { 
	return (this->getCourseNumber() == num); 
}

Course::~Course()
{

}