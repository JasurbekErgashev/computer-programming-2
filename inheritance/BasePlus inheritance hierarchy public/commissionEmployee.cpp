// class CommissionEmployee member-function definitions
#include <stdexcept>
#include <sstream>
#include "CommissionEmployee.h" // class definition

// constructor
CommissionEmployee::CommissionEmployee(const string& firstName,
	const string& lastName, const string& socialSecurityNumber, const double& grossSales, const double& rate) {
	setFirstName(firstName); // should validate
	setLastName(lastName); // should validate
	setSocialSecurityNumber(socialSecurityNumber); // should validate

	setGrossSales(grossSales); // validate and store gross sales
	setCommissionRate(rate); // validate and store com. rate

}

// set first name
void CommissionEmployee::setFirstName(const string& firstName) {
	this->firstName = firstName;
}

// return first name
string CommissionEmployee::getFirstName() const {
	return firstName;
}

// set last name
void CommissionEmployee::setLastName(const string& lastName) {
	this->lastName = lastName;
}

// return last name
string CommissionEmployee::getLastName() const {
	return lastName;
}

// set social security number
void CommissionEmployee::setSocialSecurityNumber(const string& socialSecurityNumber) {
	this->socialSecurityNumber = socialSecurityNumber;
}

// get social security number'
string CommissionEmployee::getSocialSecurityNumber() const {
	return socialSecurityNumber;
}

// set gross sales amount
void CommissionEmployee::setGrossSales(const double& grossSales) {
	if (grossSales < 0.0) {
		throw invalid_argument("Gross sales must be >= 0.0");
	}
	this->grossSales = grossSales;
}

// return gross sales amount
double CommissionEmployee::getGrossSales() const {
	return grossSales;
}

// set commission rate
void CommissionEmployee::setCommissionRate(const double& commissionRate) {
	if (commissionRate <= 0.0 || commissionRate >= 1.0) {
		throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
	}
	this->commissionRate = commissionRate;
}

// return commission rate
double CommissionEmployee::getCommissionRate() const {
	return commissionRate;
}

// calculate earnings
double CommissionEmployee::earnings() const {
	return commissionRate * grossSales;
}

// return string representation of CommissionEmployee object
string CommissionEmployee::toString() const {
	ostringstream output;

	output << fixed << setprecision(2); // two digits of precision
	output << "commission employee: " << firstName << " " << lastName
		<< "\nsocial security number: " << socialSecurityNumber
		<< "\ngross sales: " << grossSales
		<< "\ncommission rate: " << commissionRate;

	return output.str();
}
