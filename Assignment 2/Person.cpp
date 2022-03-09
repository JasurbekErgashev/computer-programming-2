
// implementation of base class Person
#include "Person.h"

// constructor
Person::Person(const string& fn, const string& ln, const string& id, const int& a) {
	first_name = fn;
	last_name = ln;
	passport_id = id;
	set_age(a);
}

// set first name
void Person::set_first_name(const string& fn) {
	first_name = fn;
}
// return first name
string Person::get_first_name() const {
	return first_name;
}

// set last name
void Person::set_last_name(const string& ln) {
	last_name = ln;
}
// return last name
string Person::get_last_name() const {
	return last_name;
}

// set passport id
void Person::set_passport_id(const string& id) {
	passport_id = id;
}
// return passport id
string Person::get_passport_id() const {
	return passport_id;
}

// set age
void Person::set_age(const int& a) {
	if (a >= 0) { // for validation
		age = a;
	}
}
// return age
int Person::get_age() const {
	return age;
}
