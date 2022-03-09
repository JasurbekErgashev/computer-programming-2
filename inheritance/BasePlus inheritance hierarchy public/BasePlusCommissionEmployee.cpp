// class BasePlusCommissionEmployee member-function definitions
#include "BasePlusCommissionEmployee.h"
#include <sstream>
#include <iomanip>
#include <stdexcept>
#include <string>

// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
	const string& firstName, const string& lastName, const string& socialSecurityNumber,
	const double& grossSales, const double& commissionRate, const double& baseSalary)
	// explicitly call base-class constructor
	: CommissionEmployee(firstName, lastName, socialSecurityNumber, grossSales, commissionRate) {
	setBaseSalary(baseSalary);
}

// set base salary
void BasePlusCommissionEmployee::setBaseSalary(const double& baseSalary) {
	if (baseSalary < 0.0) {
		throw invalid_argument("Salary must be >= 0.0");
	}
	this->baseSalary = baseSalary;
}

// return base salary
double BasePlusCommissionEmployee::getBaseSalary() const {
	return baseSalary;
}

// calculate earnings
double BasePlusCommissionEmployee::earnings() const {
	// derived class cannot access the base class's private data
	return baseSalary + (getCommissionRate() * getGrossSales());
}

// return string representation of BasePlusCommissionEmployee object
string BasePlusCommissionEmployee::toString() const {
	ostringstream output;
	output << fixed << setprecision(2); // two digits of precision

	// derived class cannot access the base class's private data
	output << "base-salaried commission employee: " << getFirstName() << " "
		<< getLastName() << "\nsocial security number: " << getSocialSecurityNumber()
		<< "\ngross sales: " << getGrossSales()
		<< "\ncommission rate: " << getCommissionRate()
		<< "\nbase salary: " << baseSalary;
	return output.str();
}
