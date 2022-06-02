#include "Quadratic.h"

int main() {

	Quadratic q1{ 1, 3, 2 };
	Quadratic q2{ 1, 2, 1 };

	cout << q1 << "\n";
	q1.solve(1, 3, 2);
	cout << "\n\n";

	cout << q2 << "\n";
	q2.solve(1, 2, 1);
	cout << "\n\n";

	cout << "Addition: \n";
	Quadratic q3 = q1 + q2;
	cout << q3;
	cout << "\n\n";

	cout << "Substraction: \n";
	Quadratic q4 = q1 - q2;
	cout << q4;
	cout << "\n\n";

	system("pause>0");
	return 0;
}
