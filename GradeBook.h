// NAME  : Yevgeniy Lankin
// CLASS : CISP 400, Online
// Assignment #: A1
// PURPOSE : GradeBook class definition. This file presents GradeBook's public 
//           interface without revealing the implementations of GradeBook's member
//           functions, which are defined in GradeBook.cpp
//           To show my understanding of a header file and function prototypes.
// Software Change (Modifications) Record
// date         what               who
// 09/03/2015   created program    Yev

#include <string> // class GradeBook uses C++ standard string class

// GradeBook class definition
class GradeBook
{
public:
	explicit GradeBook(std::string, std::string); // constructor initialize courseName
	void setCourseName(std::string); // sets the course name
	std::string getCourseName() const; // gets the course name
	void displayMessage() const; // displays a welcome message
	void setInstructorName(std::string); // sets the instructor's name
	std::string GradeBook::getInstructorName(); // gets the instructor's name

private:
	std::string courseName; // course name for this GradeBook
	std::string instructorName; // course instructor's name
}; // end class GradeBook  
