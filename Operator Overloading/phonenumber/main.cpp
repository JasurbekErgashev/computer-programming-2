
// operator overloading Class String
#include <iostream>
#include "PhoneNumber.h"
using namespace std;

// Overloading the Binary Stream Insertionand Stream Extraction Operators

int main(){

    PhoneNumber phone; // create object phone

    cout << "Enter phone number in the form (555) 555-5555:" << endl;
    
    // cin >> phone invokes operator>> by implicitly issuing
    // the non-member function call operator>>(cin, phone)
    cin >> phone;

    cout << "\nThe name entered was:\n";

    // cout << phone invokes operator<< by implicitly issuing
    // the non-member function call operator<<(cout, phone)
    cout << phone << endl;

    return 0;
}
