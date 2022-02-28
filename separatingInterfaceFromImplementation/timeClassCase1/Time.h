// time class definition
// member functions are defined in Time.cpp

#include <string>

// prevent multiple inclusions of header
#ifndef TIME_H
#define TIME_H

// Time class definition
class Time {
public:
	// function signature
	void setTime(int, int, int); // set hour, minute and second
	std::string toUniversalString() const; // 24 hour format
	std::string toStandardString() const; // 12 hour time

private:
	unsigned int hour{ 0 };
	unsigned int minute{ 0 };
	unsigned int second{ 0 };
};


#endif // !TIME_H
