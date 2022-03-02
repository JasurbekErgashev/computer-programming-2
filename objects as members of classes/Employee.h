#include <string>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h"

class Employee {
public:
	Employee(const std::string&, const std::string&, const Date&, const Date&);
	std::string toString() const;
	~Employee();
private:
	std::string firstName;
	std::string lastName;
	const Date birthDate;
	const Date hireDate;
};

#endif // !EMPLOYEE_H
