#include <iostream>
#include <stdexcept>
#include "Time.h" // include definition of class Time

using namespace std;

// displays a Time
void displayTime(const string& message, const Time& time) {
	cout << message << "\nUniversal time: " << time.toUniversalString()
		<< "\nStandard time: " << time.toStandardString() << "\n\n";
}

int main() {
	Time t1; // all arguments defaulted
	Time t2{ 2 }; // hour specified; m and s default
	Time t3{ 21, 34 }; // hour and minute
	Time t4{ 12, 25, 42 }; // all spec

	cout << "Constructed with:\n\n";
	displayTime("t1: all arguments defaulted", t1);
	displayTime("t2: hour specified; minute and second defaulted", t2);
	displayTime("t3: hour and minute specified; second defaulted", t3);
	displayTime("t4: hour, minute and second specified", t4);

	// attempt to initialize t5 with invalid values
	try {
		Time t5{ 27, 74, 99 };
	}
	catch(invalid_argument& e) {
		cerr << "Exception while initializing t5: " << e.what() << endl;
	}
}
