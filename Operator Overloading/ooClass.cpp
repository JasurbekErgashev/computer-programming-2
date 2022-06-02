#include <iostream>
#include <string>
#include <list>

using namespace std;

class Programming {
	// using friend in order to make it accessible outside of class scope
	// overloading << operator
	friend ostream& operator << (ostream& COUT, const Programming& prog) {
		COUT << "Programming language: " << prog.language << endl
			<< "Programmer name: " << prog.programmerName << endl
			<< "Final grade: " << prog.finalGrade;
		return COUT;
	}
	// overloading >> operator
	friend istream& operator >> (istream& CIN, Programming& prog) {
		cout << "Enter your favourite programming language: ";
		CIN >> prog.language;
		cout << "Enter your name: ";
		CIN >> prog.programmerName;
		cout << "Enter your final grade: ";
		CIN >> prog.finalGrade;
		return CIN;
	}
public:
	// constructor
	Programming(string language, string programmerName, int finalGrade) {
		this->language = language;
		this->programmerName = programmerName;
		this->finalGrade = finalGrade;
	}

private:
	string language;
	string programmerName;
	int finalGrade{ 0 };
};

struct MyRecords {
	// list of records to save info
	list<Programming> records;
	// overloading += operator
	void operator += (Programming& programming) {
		this->records.push_back(programming);
	}
};

// overloading insertion operator for MyRecords
ostream& operator << (ostream& COUT, MyRecords myRec) {
	int track{ 1 };
	// displaying all info
	for (Programming p : myRec.records) {
		COUT << track << ". \n" << p << "\n\n";
		track++;
	}
	return COUT;
}

int main() {

	Programming p{ "C++", "Jasurbek", 95 };
	// stream insertion operator overloading
	cout << p;
	MyRecords myRecords;
	myRecords += p;

	cout << "\n\n";
	// stream extraction operator overloading
	cin >> p;
	myRecords += p;

	system("cls");
	cout << "Your records: \n\n";
	cout << myRecords;

	cout << "Do you want to add more records: y/n \n";
	string yesNo;
	cin >> yesNo;

	// tracking user info continuously
	while (yesNo != "n") {
		cin >> p;
		myRecords += p;
		system("cls");
		cout << "Your records: \n\n";
		cout << myRecords;
		cout << "Do you want to add more records: y/n \n";
		cin >> yesNo;
	}

	cout << "Thanks a bunch!\n";
	
	system("pause>0");
	return 0;
}
