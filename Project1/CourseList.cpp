/*
	Group_Chocolate
	Do, Nicholas
	Nuernberg, Samantha
	Nguyen, Ben

	CS A250
	May 14, 2019

	Project 2
*/

#include "CourseList.h"

CourseList::CourseList()
{
	courseList = new list<Course>;
}

// Copy constructor
CourseList::CourseList(const CourseList& otherList) {
	courseList = new list<Course>(*otherList.courseList);
}

// Overload operator
CourseList& CourseList::operator=(const CourseList & otherList)
{
	if (this == &otherList) {
		cerr << "Course is the same";
	}
	else {
		*this->courseList = *otherList.courseList;
	}
	return *this;
}

// Definition function addCourse
void CourseList::addCourse(const string& newName, int newNumber, double newUnits,
	const vector<int>& newPrereqs, char newValue) const
{
	courseList->push_back(Course(newName, newNumber, newUnits, newPrereqs, newValue));
}

// Definition deleteCourse
void CourseList::deleteCourse(int courseNum) const
{
	courseList->erase(getCourseLocation(courseNum));
}

// Definition function isEmpty
bool CourseList::isEmpty() const
{
	return courseList->empty();
}

// Definition searchCourse
bool CourseList::searchCourse(int searchValue) const
{
	return getCourseLocation(searchValue) != courseList->cend();
}

// Definition printAllCourses
void CourseList::printAllCourses() const
{
	for (const auto& item : *courseList) {
		cout << CourseType::getPrefix() << item.getCourseNumber() 
			<< " - " << item.getCourseName() << endl;
	}
}

// Definition printTransferCourses
void CourseList::printTransferCourses() const
{
	for (const auto& item : *courseList) {
		if (item.isTransferable())
			cout << CourseType::getPrefix() << item.getCourseNumber() 
			<< " - " << item.getCourseName() << endl;
	}
}

// Definition printVocationalCourses
void CourseList::printVocationalCourses() const
{
	for (const auto& item : *courseList) {
		if (!item.isTransferable())
			cout << CourseType::getPrefix() << item.getCourseNumber() 
			<< " - " << item.getCourseName() << endl;
	}
}

// Definition printCourseByNumber
void CourseList::printCourseByNumber(int num) const
{
	getCourseLocation(num)->printCourse();
}

// Definition printPrereqs
void CourseList::printPrereqs(int num) const
{
	getCourseLocation(num)->printPrereqs();
}

// Definition clearList
void CourseList::clearList() const
{
	courseList->clear();
}

// Destructor
CourseList::~CourseList()
{
	delete courseList;
	courseList = nullptr;
}

list<Course>::const_iterator CourseList::getCourseLocation(int courseNumber) const
{
	return find(courseList->cbegin(), courseList->cend(), courseNumber);
}