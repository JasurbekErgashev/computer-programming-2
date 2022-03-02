#include <iostream>
#include <sstream>
#include "Employee.h"
#include "Date.h"
using namespace std;

// constructor uses member initializer list to pass initializer
// values to constructors of member objects
Employee::Employee(const string& firstName, const string& lastName,
	const Date& dateOfBirth, const Date& dateOfHire)
	: birthDate{ dateOfBirth },
	hireDate{ dateOfHire }{
	this->firstName = firstName; this->lastName = lastName;
	cout << "Employee object constructor: "
		<< firstName << ' ' << lastName << endl;
}

string Employee::toString() const {
	ostringstream output;
	output << lastName << ", " << firstName << " Hired: "
		<< hireDate.toString() << " Birthday: " << birthDate.toString();
	return output.str();
}

Employee::~Employee() {
	cout << "Employee object destructor : "
		<< lastName << ", " << firstName << endl;
}
