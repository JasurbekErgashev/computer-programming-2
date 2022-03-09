// commissionEmployee class definition represents a commission employee

#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // C++ standard string class
#include <iomanip>
using namespace std;

class BasePlusCommissionEmployee {
public:
	BasePlusCommissionEmployee(const string & = "", const string & = "",
		const string & = "", const double& = 0.0, const double& = 0.1, const double& = 0.1); // specifically I initialized double to 0.1 because in validation it is crying vhaha-ha
	// setter and getter functions
	void setFirstName(const string&); // set first name
	string getFirstName() const; // return first name

	void setLastName(const string&); // set last name
	string getLastName() const; // return last name

	void setSocialSecurityNumber(const string&); // set SSN
	string getSocialSecurityNumber() const; // return SSN

	void setGrossSales(const double&); // set gross sales amount
	double getGrossSales() const; // return gross sales amount

	void setCommissionRate(const double&); // set commission rate per
	double getCommissionRate() const; // return commission rate

	void setBaseSalary(const double&); // set base salary
	double getBaseSalary() const; // return base salary

	// just for making clear everything

	double earnings() const; // calculate earnings
	string toString() const; // create string representation

private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales; // gross weekly sales
	double commissionRate; // commission percentage
	double baseSalary; // base salary
};

#endif // !BASEPLUS_H
