/*
	Group_Chocolate
	Do, Nicholas
	Nuernberg, Samantha
	Nguyen, Ben

	CS A250
	May 14, 2019

	Project 2
*/

#include "Interface.h"

void displayMenu()
{
	cout << "**************************************************************\n"
		<< "                          MAIN MENU\n"
		<< "**************************************************************\n";
	cout << "\nSelect one of the following:\n\n";
	cout << "    1: Print all courses" << endl;
	cout << "    2: Print all transfer courses" << endl;
	cout << "    3: Print all vocational courses" << endl;
	cout << "    4: Print course by course number" << endl;
	cout << "    5: Print course prerequisites" << endl;
	cout << "    6: Delete course" << endl;
	cout << "    7: To exit" << endl;
}

void processChoice(CourseList& courseList)
{
	int choice = 0;

	cout << "\nEnter your choice: ";
	cin >> choice;
	cout << endl;

	while (choice != 7)
	{
		int courseNumber = 0;

		switch (choice)
		{
		case 1:
			cout << "--------------------------------------------------------------\n"
				<< "                          CS COURSES\n"
				<< "--------------------------------------------------------------\n\n";
			courseList.printAllCourses();
			break;

		case 2:

			cout << "--------------------------------------------------------------\n"
				<< "                     CS TRANSFER COURSES\n"
				<< "--------------------------------------------------------------\n\n";
			courseList.printTransferCourses();

			break;

		case 3:
			cout << "--------------------------------------------------------------\n"
				<< "                   CS VOCATIONAL COURSES\n"
				<< "--------------------------------------------------------------\n\n";
			courseList.printVocationalCourses();

			break;

		case 4:

			cout << "  => Enter course number (enter only numbers: 150, 250...): ";
			cin >> courseNumber;
			cout << endl;

			if (courseList.searchCourse(courseNumber))
			{
				cout << "  => ";
				courseList.printCourseByNumber(courseNumber);
			}
			else
				cout << "  => Course number " << courseNumber
				<< " is invalid." << endl;
			
			break;

		case 5:
			cout << "  => Enter course number (enter only numbers: 150, 250...): ";
			cin >> courseNumber;
			cout << endl;

			if (courseList.searchCourse(courseNumber))
			{
				cout << "  => ";
				courseList.printPrereqs(courseNumber);
			}
			else
				cout << "  => Course number " << courseNumber
				<< " is invalid." << endl;

			break;

		case 6:
			cout << "  => Enter course number (enter only numbers: 150, 250...): ";
			cin >> courseNumber;
			cout << endl;

			if (courseList.searchCourse(courseNumber))
			{
				courseList.deleteCourse(courseNumber);
				cout << "  => Course has been deleted";
			}
			else
				cout << "  => Course number " << courseNumber
				<< " is invalid." << endl;

			break;

		default:
			cout << "  => Sorry. That is not a selection." << endl;
			break;
		}

		cout << "\n==============================================================\n\n";
		system("Pause");
		cout << endl;
		displayMenu();

		cout << "\nEnter your choice: ";
		cin >> choice;
		cout << endl;
	}

	if (choice == 7)
		cout << "Thank you for using our software."
		<< " Good bye!\n";
}