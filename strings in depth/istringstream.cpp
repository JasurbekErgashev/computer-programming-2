#include <iostream>
#include <sstream> // header for stream string processing
#include <string>

using namespace std;

int main(){

    // String Stream Processing // istringstream

    string input{ "Input test 123 4.7 A" };
    istringstream inputString{ input };

    string string1;
    string string2;
    int integer;
    double double1;
    char character;

    inputString >> string1 >> string2 >> integer >> double1 >> character;

    cout << "The following items were extracted\n"
        << "from the istringstream object:" << "\nstring: " << string1
        << "\nstring: " << string2 << "\nint: " << integer
        << "\ndouble: " << double1 << "\nchar: " << character;

    // attempt to read from empty stream
    long value;
    inputString >> value;

    // test stream results
    if (inputString.good()) {
        cout << "\n\nlong value is: " << value << endl;
    }
    else {
        cout << "\n\ninputString is empty" << endl;
    }

    system("pause>0");
    return 0;
}
