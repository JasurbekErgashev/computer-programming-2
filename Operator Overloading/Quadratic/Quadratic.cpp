#include "Quadratic.h"
#include <cmath>

Quadratic::Quadratic(const double& a, const double& b, const double& c, const char& ch) {
	if (a == 0)
		this->a = 1;
	else
		this->a = a;
	this->b = b;
	this->c = c;
	this->ch = ch;
}

void Quadratic::solve(const double& a, const double& b, const double& c) {
	double d = b * b - 4 * a * c;
	if (d == 0) {
		double x = (-1 * b) / 2 * a;
		cout << "Root: x = " << x;
	}
	else if (d < 0)
		cout << "No Real Roots.";
	else {
		double x1 = ((-1 * b) + sqrt(d)) / 2 * a;
		double x2 = ((-1 * b) - sqrt(d)) / 2 * a;
		cout << "Roots: x(1) = " << x1 << "  x(2) = " << x2;
	}
}

ostream& operator << (ostream& output, const Quadratic& q) {
	output << q.a << q.ch << "^2 + " << q.b << q.ch << " + " << q.c << " = 0";
	return output;
}


Quadratic& Quadratic::operator + (Quadratic& const q1) {
	Quadratic q2;
	q2.a = a + q1.a;
	q2.b = b + q1.b;
	q2.c = c + q1.c;
	return q2;
}

Quadratic& Quadratic::operator - (Quadratic& const q1) {
	Quadratic q2;
	q2.a = a - q1.a;
	q2.b = b - q1.b;
	q2.c = c - q1.c;
	return q2;
}
