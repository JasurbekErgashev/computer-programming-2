// Operators Overloading
#include <iostream>
#include <array>

using namespace std;

ostream& operator << (ostream& output, array<int, 10> numbers) {
	for (int n : numbers)
		output << n << " ";
	return output;
}

int main() {

	array<int, 10> numbers{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// overloading insertion operator to display array elements
	cout << numbers;

	system("pause>0");
	return 0;
}
