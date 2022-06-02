#include <string>
#include "Date.h"


// initialize static member; one classwide copy
const array<unsigned int, 13> Date::days{
	0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

// Date constructor
Date::Date(int month, int day, int year) {
	setDate(month, day, year);
}

// set month, day and year
void Date::setDate(int month, int day, int year) {
	if (month >= 1 && month <= 12)
		this->month = month;
	else
		throw invalid_argument{ "Month must be 1-12" };
	if (year >= 1900 && year <= 2100)
		this->year = year;
	else
		throw invalid_argument{ "Year must be >= 1900 and <= 2100" };

	// test for a leap year
	if ((month == 2 && leapYear(year) && day >= 1 && day <= 29) || (day >= 1 && day <= days[month]))
		this->day = day;
	else
		throw invalid_argument{ "Day is out of range for current month and year" };
}

// overloaded prefix increment operator
Date& Date::operator ++ () {
	helpIncrement(); // increment date
	return *this; // reference return to create lvalue
}

// overloaded postfix increment operator; note that the 
// dummy integer parameter does not have a parameter name
Date Date::operator++(int) {
	Date temp{ *this }; // hold current state of object
	helpIncrement();

	// return unincremented, saved, temporary object
	return temp; // value return; not a reference return
}

// add specific number of days to date
Date& Date::operator+=(unsigned int additionalDays) {
	for (unsigned int i{ 0 }; i < additionalDays; ++i) {
		helpIncrement();
	}
	return *this; // enables cascading
}

// if the year is a leap year, return true; otherwise, return false
bool Date::leapYear(int testYear) {
	return (testYear % 400 == 0 || (testYear % 100 != 0 && testYear % 4 == 0));
}

// determine whether the day is the last day of the month
bool Date::endOfMonth(int testDay) const {
	if (month == 2 && leapYear(year))
		return testDay == 29; // last day of Feb. in leap year
	else
		return testDay == days[month];
}

// function to help increment the date
void Date::helpIncrement() {
	// day is not end of month
	if (!endOfMonth(day))
		++day; // increment day
	else {
		if (month < 12) { // day is end of month and month < 12
			++month; // increment month
			day = 1; // first day of new month
		}
		else { // last day of year
			++year; // increment yeaar
			month = 1; // first month of new year
			day = 1; // first day of new month
		}
	}
}

// overload output operator
ostream& operator << (ostream& output, const Date& d) {
	static string monthName[13]{ "", "January", "February", "March",
	"April", "May", "June", "July", "August", "September", "October",
	"November", "December" };
	output << monthName[d.month] << " " << d.day << ", " << d.year;
	return output; // enables cascading
}
