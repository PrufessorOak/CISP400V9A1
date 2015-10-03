// NAME  : Yevgeniy Lankin
// CLASS : CISP 400, Online
// Assignment #: A1
// PURPOSE : To show my understanding of member functions prototyped in GradeBook.h
// Software Change (Modifications) Record
// date         what               who
// 09/03/2015   created program    Yev

#include <iostream> // allows program to output data to the screen
#include "GradeBook.h" // include definition of class GradeBook
using namespace std; // program uses names from the std namespace

// constructor initializes courseName and instructorName with strings supplied as arguments
GradeBook::GradeBook(string name, string name2)
	: courseName(name), instructorName(name2)
{
	// empty body
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName(string name)
{
	courseName = name; // store the course name in the object
} // end function setCourseName

// function to get the course name
string GradeBook::getCourseName() const
{
	return courseName; // return object's courseName
} // end function getCourseName

// displays messages to the GradeBook user
void GradeBook::displayMessage() const
{
	cout << "  Welcome to the grade book for\n   " << getCourseName() // call getCourseName to get the courseName
		<< "!" << endl;
	cout << "  This course is presented by: " << instructorName << "\n\n"; // displays string stored in variable
} // end function displayMessage

// function to set the instructors name
void GradeBook::setInstructorName(string name2)
{
	instructorName = name2; // stores the instructor's name in the object
} // end function setInstructorName

// function to retrieve the instructors name
string GradeBook::getInstructorName()
{
	return instructorName;
} // end function getInstructorName
