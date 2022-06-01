#include <iostream>
#include <string>
using namespace std;

struct Question {
	string question;
	string options[3];
	bool answers[3];
};

int main() {

	Question q1{ "What is the smallest country?", {"USA", "India", "Vatican City"}, {false, false, true} };
	Question q2{ "What's the biggest animal in the world?", {"Elephant", "Blue whale", "Great white shark"}, {false, true, false} };
	Question q3{ "How many elements are there in the periodic table?", {"118 elements", "119 elements", "120 elements"}, {true, false, false}};

	Question questions[3] = { q1, q2, q3 };

	int correctAnswers{ 0 };
	int incorrectAnswers{ 0 };

	for (int i{ 0 }; i < 3; i++) {
		cout << questions[i].question << endl;
		for (int j{ 0 }; j < 3; j++) {
			cout << j + 1 << ". " << questions[i].options[j] << endl;
		}
		cout << "Choose 1-3: ";
		int index;
		cin >> index;
		if (questions[i].answers[index - 1] == true) {
			cout << "Correct!\n\n";
			correctAnswers++;
		}
		else {
			cout << "Incorrect!\n\n";
			incorrectAnswers++;
		}
	}

	cout << "You found " << correctAnswers << " questions correct and " << incorrectAnswers << " questions wrong!";
	cout << "\nThanks !!!\n";

	system("pause>0");

	return 0;
}
