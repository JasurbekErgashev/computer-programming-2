// human class implementation
#include <iostream>
#include "Human.h" // contains the definition of class Human
using namespace std;

// Human constructor initializes each data member
Human::Human(int left_hand, int right_hand, string first_name, string last_name, int id_number) {
	setLeftHand(left_hand);
	setRightHand(right_hand);
	setFirstName(first_name);
	setLastName(last_name);
	setIdNumber(id_number);
}

// setting setLeftHand value
void Human::setLeftHand(int left_hand) {
	this->left_hand = left_hand; // using THIS pointer which refers to the original data of the class
}

// setting setRightHand value
void Human::setRightHand(int right_hand) {
	this->right_hand = right_hand;
}

// setting setFirstName value
void Human::setFirstName(string first_name) {
	this->first_name = first_name;
}

// setting setLastName value
void Human::setLastName(string last_name) {
	this->last_name = last_name;
}

// setting setIdNumber
void Human::setIdNumber(int id_number) {
	this->id_number = id_number;
}



// returning getLeftHand value
int Human::getLeftHand() const {
	return left_hand;
}

// returning getRightHand value
int Human::getRightHand() const {
	return right_hand;
}

// returning getFirstName value
string Human::getFirstName() const {
	return first_name;
}

// returning getLastName value
string Human::getLastName() const {
	return last_name;
}

// returning getIdNumber value
int Human::getIdNumber() const {
	return id_number;
}

// display function
void Human::display() {
	cout << "Left hand: " << getLeftHand() << endl;
	cout << "Right hand: " << getRightHand() << endl;
	cout << "First Name: " << getFirstName() << endl;
	cout << "Last Name: " << getLastName() << endl;
	cout << "ID Number: " << getIdNumber() << endl;
}
