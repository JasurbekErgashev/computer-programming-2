#include <iostream>
#include <string>

using namespace std;

int main(){

    // iterators

    string string1{ "Testing iterators" };
    string::const_iterator iterator1{ string1.begin() };

    cout << "string1 = " << string1
        << "\n(Using iterator iterator1) string1 is: ";

    // iterate through string
    while (iterator1 != string1.end()) {
        cout << *iterator1; // dereference iterator to get char
        ++iterator1;
    }

    cout << endl;

    system("pause>0");
    return 0;
}
