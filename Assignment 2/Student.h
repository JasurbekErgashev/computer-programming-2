// Student class derived from Base class Person

#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h" // Person class declaration
#include <iostream>

class Student : public Person { // public inheritance
public:
	// default constructor
	Student(const string& = "", const string& = "", const string& = "", const int& = 0, const string& = "", const float& = 0.0);
	// default constructor is used to create objects, which do not have any specific initial value

	// setter functions
	void set_student_id(const string&);
	void set_grade(const float&);

	// getters
	string get_student_id() const;
	float get_grade() const;

	// display function
	void display();

private:
	string student_id;
	float grade{ 0.0 };
};

#endif // !STUDENT_H
