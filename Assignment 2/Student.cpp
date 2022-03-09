
// derived student class implementation
#include "Student.h"

// constructor
Student::Student(const string& fn, const string& ln, const string& id, const int& a, const string& student_id, const float& grade)
	// explicitly call base-class constructor
	: Person(fn, ln, id, a) {
	set_student_id(student_id);
	set_grade(grade);
}

// set student id 
void Student::set_student_id(const string& student_id) {
	this->student_id = student_id; // using THIS pointer which refers to the original data of the class
}
// set grade 
void Student::set_grade(const float& grade){
	if (grade >= 0.0) { // for validation
		this->grade = grade;
	}
}

// get student id
string Student::get_student_id() const {
	return student_id;
}
// get grade
float Student::get_grade() const {
	return grade;
}

// display function
void Student::display() {
	// Student info to represent in main function
	cout << "First Name: " << get_first_name() << endl
	    << "Last Name: " << get_last_name() << endl
		<< "Passport ID: " << get_passport_id() << endl
		<< "Age: " << get_age() << endl
		<< "Student ID: " << get_student_id() << endl
		<< "Grade: " << get_grade() << endl;
}
