#include <iostream>
#include <string>

using namespace std;

int main(){

    // swapping strings

    string first{ "one" };
    string second{ "two" };

    // output strings
    cout << "Before swap:\n first: " << first << "\nsecond: " << second;

    first.swap(second); // swap strings

    cout << "\n\nAfter swap:\n first: " << first << "\nsecond: " << second << endl;

    system("pause>0");
    return 0;
}
