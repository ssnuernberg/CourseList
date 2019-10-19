/*
	Group_Chocolate
	Do, Nicholas
	Nuernberg, Samantha
	Nguyen, Ben

	CS A250
	May 14, 2019

	Project 2
*/

#ifndef COURSELIST_H
#define COURSELIST_H

#include "Course.h"
#include <list>
#include <algorithm>

class CourseList
{
public:
	// Default constructor
	CourseList();
	// Copy constructor
	CourseList(const CourseList& otherList);
	// Overload operator 
	CourseList& operator=(const CourseList & otherList);

	// Function addCourse
	void addCourse(const string&, int, double, const vector<int>&, char) const;
	// Function deleteCourse
	void deleteCourse(int courseNum) const;

	// Boolean functions
	bool isEmpty() const;
	// Print functions
	bool searchCourse(int) const;

	// Function printAllCourses
	void printAllCourses() const;
	// Function printTransferCourses
	void printTransferCourses() const;
	// Function printVocationalCourses
	void printVocationalCourses() const;
	// Function printPrereqs
	void printPrereqs(int) const;
	//Function printCourseByNumber
	void printCourseByNumber(int)const;

	// Function clearList
	void clearList() const;

	// Destructor
	~CourseList();
private:
	// Declaration function getCourseLocation
	list<Course>::const_iterator getCourseLocation(int courseNumber) const;
	list<Course>* courseList;
};
#endif