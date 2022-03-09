#include <iostream>
#include "CommissionEmployee.h" // class definition

int main() {

	// default constructor
	cout << "Default constructor: \n\n";
	CommissionEmployee emDef;
	cout << emDef.toString(); 
	cout << "\n\n";

	// instantiate a CommissionEmployee object
	CommissionEmployee employee{ "Sue", "Jones", "222-22-2222", 10000, .06 };
	CommissionEmployee& employeeRef{ employee }; // via a reference

	// get commission employee data
	cout << fixed << setprecision(2); // set floating-point formatting
	cout << "Employee information obtained by get functions: \n"
		<< "\nFirst name is " << employeeRef.getFirstName()
		<< "\nLast name is " << employeeRef.getLastName()
		<< "\nSocial security number is "
		<< employeeRef.getSocialSecurityNumber()
		<< "\nGross sales is " << employeeRef.getGrossSales()
		<< "\nCommission rate is " << employeeRef.getCommissionRate() << endl;

	employeeRef.setGrossSales(8000); // set gross sales
	employeeRef.setCommissionRate(.1); // set commission rate
	cout << "\nUpdated employee information from function toString: \n\n"
		<< employeeRef.toString();

	// display the employee's earnings
	cout << "\n\nEmployee's earnings: $" << employeeRef.earnings() << endl << endl;


	// via a pointer
	CommissionEmployee employee2{ "Mark", "Thomas", "23-455-2221", 3456, .45 };
	CommissionEmployee* employee2Ptr{ &employee2 };

	cout << employee2Ptr->toString() << "\n\n";

	// thanks

	return 0;
}
