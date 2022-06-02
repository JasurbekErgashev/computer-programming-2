// dynamic memory management
// Array Class Test Program
#include <iostream>
#include <stdexcept>
#include "Array.h"

using namespace std;

int main() {
	Array integers1{ 7 }; // seven-element Array
	Array integers2; // 10-element Array by default

	// print integers1 size and contents
	cout << "Size of Array integers1 is " << integers1.getSize()
		<< "\nArray after initialization: " << integers1;

	// print integers2 size and contents
	cout << "\nSize of Array integers2 is " << integers2.getSize()
		<< "\nArray after initialization: " << integers2;

	// input and print integers1 and integers2
	cout << "\nEnter 17 integers: " << endl;
	cin >> integers1 >> integers2;

	cout << "\nAfter input, the Arrays contain:\n"
		<< "integers1: " << integers1
		<< "integers2: " << integers2;

	// use overloaded inequality (!=) operator
	cout << "\nEvaluating: integers1 != integers2" << endl;

	if (integers1 != integers2) {
		cout << "integers1 and integers2 are not equal" << endl;
	}

	// create Array integers3 and integers1 as an
	// initializer; print size and contents
	Array integers3{ integers1 }; // invokes copy constructor

	cout << "\nSize of Array integers3 is " << integers3.getSize()
		<< "\nArray after initialization: " << integers3;

	// use overloaded equality (==) operator
	cout << "\nEvaluating: integers1 == integers2" << endl;

	if (integers1 == integers2) {
		cout << "integers1 and integers2 are equal" << endl;
	}

	// use overloaded subscript operator to create rvalue
	cout << "\nintegers1[5] is " << integers1[5];

	// use overloaded subscript operator to create lvalue
	cout << "\n\nAssigning 1000 to integers1[5]" << endl;
	integers1[5] = 1000;
	cout << "integers1: " << integers1;

	// attempt to use out-of-range subcript
	try {
		cout << "\nAttempt to assign 1000 to integers1[15]" << endl;
		integers1[15] = 1000; // ERROR: subscript out of range
	}
	catch (out_of_range& ex) {
		cout << "An exception occurred: " << ex.what() << endl;
	}

	system("pause>0");
	return 0;
}
