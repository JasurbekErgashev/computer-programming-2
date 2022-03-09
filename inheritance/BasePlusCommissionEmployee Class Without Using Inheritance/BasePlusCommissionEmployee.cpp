// class CommissionEmployee member-function definitions
#include <stdexcept>
#include <sstream>
#include "BasePlusCommissionEmployee.h" // class definition

// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& firstName,
	const string& lastName, const string& socialSecurityNumber, const double& grossSales, const double& commissionRate, const double& baseSalary) {
	setFirstName(firstName); // should validate
	setLastName(lastName); // should validate
	setSocialSecurityNumber(socialSecurityNumber); // should validate
	setBaseSalary(baseSalary);

	setGrossSales(grossSales); // validate and store gross sales
	setCommissionRate(commissionRate); // validate and store com. rate
	
}

// set first name
void BasePlusCommissionEmployee::setFirstName(const string& firstName){
	this->firstName = firstName;
}

// return first name
string BasePlusCommissionEmployee::getFirstName() const {
	return firstName;
}

// set last name
void BasePlusCommissionEmployee::setLastName(const string& lastName) {
	this->lastName = lastName;
}

// return last name
string BasePlusCommissionEmployee::getLastName() const {
	return lastName;
}

// set social security number
void BasePlusCommissionEmployee::setSocialSecurityNumber(const string& socialSecurityNumber) {
	this->socialSecurityNumber = socialSecurityNumber;
}

// get social security number'
string BasePlusCommissionEmployee::getSocialSecurityNumber() const {
	return socialSecurityNumber;
}

// set gross sales amount
void BasePlusCommissionEmployee::setGrossSales(const double& grossSales) {
	if (grossSales < 0.0) {
		throw invalid_argument("Gross sales must be >= 0.0");
	}
	this->grossSales = grossSales;
}

// return gross sales amount
double BasePlusCommissionEmployee::getGrossSales() const {
	return grossSales;
}

// set commission rate
void BasePlusCommissionEmployee::setCommissionRate(const double& commissionRate) {
	if (commissionRate <= 0.0 || commissionRate >= 1.0) {
		throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
	}
	this->commissionRate = commissionRate;
}

// return commission rate
double BasePlusCommissionEmployee::getCommissionRate() const {
	return commissionRate;
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
	return baseSalary + (commissionRate * grossSales);
}

// return string representation of CommissionEmployee object
string BasePlusCommissionEmployee::toString() const {
	ostringstream output;

	output << fixed << setprecision(2); // two digits of precision
	output << "commission employee: " << firstName << " " << lastName
		<< "\nsocial security number: " << socialSecurityNumber
		<< "\ngross sales: " << grossSales
		<< "\ncommission rate: " << commissionRate
		<< "\nbase salary: " << baseSalary;

	return output.str();
}
