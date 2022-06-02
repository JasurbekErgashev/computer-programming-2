#ifndef QUADRATIC_H
#define QUADRATIC_H

#include <iostream>
#include <string>

using namespace std;

class Quadratic {

	friend ostream& operator << (ostream&, const Quadratic&);

public:
	Quadratic(const double& = 1, const double& = 0, const double& = 0, const char& = 'x');

	Quadratic& operator + (Quadratic& const);
	Quadratic& operator - (Quadratic& const);

	void solve(const double&, const double&, const double&);

private:
	double a;
	double b;
	double c;
	char ch;
};


#endif // !QUADRATIC_H

