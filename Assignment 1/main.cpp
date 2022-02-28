#include <iostream>
#include "Human.h"
using namespace std;


int main() {

	Human obj;
	cout << "Default: \n";
	obj.display(); // calling with object name

	cout << "\n\n";

	Human obj2(2, 3, "Someone"); // in this case, only first three data members are updated others stay as a default
	Human& objRef{ obj2 };
	objRef.display(); // calling via a reference
	
	cout << "\n\n";

	Human obj3(5, 8, "Mike", "Jonson", 798); // now all data members are updated
	Human* obj3Ptr{ &obj3 };
	obj3Ptr->display(); // calling via a pointer

	return 0;
}

// Thanks 
// Jasurbek Ergashev 21SE026
// I tried to use some new notions that we learnt in lectures not only interface and implementation
