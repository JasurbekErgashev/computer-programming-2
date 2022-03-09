
// person class definition - base class

#ifndef PERSON_H // guards
#define PERSON_H

#include <string>
using namespace std;

class Person {
public:
	Person(const string & = "", const string & = "", const string & = "", const int& = 0); // default constructor
	// default constructor is used to create objects, which do not have any specific initial value

	// setters
	void set_first_name(const string&);
	void set_last_name(const string&);
	void set_passport_id(const string&);
	void set_age(const int&);

	// getters
	string get_first_name() const;
	string get_last_name() const;
	string get_passport_id() const;
	int get_age() const;

private:
	string first_name;
	string last_name;
	string passport_id;
	int age{ 0 };
};

#endif // !PERSON_H

