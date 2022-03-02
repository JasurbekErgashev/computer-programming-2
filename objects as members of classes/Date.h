#include <string>

#ifndef DATE_H
#define DATE_H

class Date {
public:
	static const unsigned int monthsPerYear{ 12 };
	explicit Date(unsigned int = 1, unsigned int = 1, unsigned int = 1900);
	std::string toString() const;
	~Date();

private:
	unsigned int month;
	unsigned int day;
	unsigned int year;

	// utility function to check if day is proper for month and year
	unsigned int checkDay(int) const;
};

#endif // !DATE_H
