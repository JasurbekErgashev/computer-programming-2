#include <string>
using namespace std;

// prevent multiple inclusions of header - guards
#ifndef HUMAN_H
#define HUMAN_H

// Human class interface
class Human {
public:
	Human(int = 0, int = 0, string = "", string = "", int = 0); // integers initialized to 0 and strings to empty value as a default
	// default constructor is used to create objects, which do not have any specific initial value

	// setter functions
	void setLeftHand(int);
	void setRightHand(int);
	void setFirstName(string);
	void setLastName(string);
	void setIdNumber(int);

	// getter functions
	int getLeftHand() const;
	int getRightHand() const;
	string getFirstName() const;
	string getLastName() const;
	int getIdNumber() const;

	// display function
	void display();

private:
	int left_hand;
	int right_hand;
	string first_name;
	string last_name;
	int id_number;
};

#endif // !HUMAN_H
