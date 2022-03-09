// BasePlusCommissionEmployee class derived from class CommissionEmployee

#ifndef BASEPLUS_H
#define BASEPLUS_H

#include "CommissionEmployee.h"// CommissionEmployee class declaration

class BasePlusCommissionEmployee : public CommissionEmployee {
public:
	// constructor
	BasePlusCommissionEmployee(const string& = "", const string& = "", const string& = "", const double& = 0.0, const double& = 0.1, const double& = 0.1);

	// setter
	void setBaseSalary(const double&); // set base salary
	// getter
	double getBaseSalary() const; // return base salary

	double earnings() const; // calculate earnings
	string toString() const; // create string representation

private:
	double baseSalary; // base salary
};

#endif
