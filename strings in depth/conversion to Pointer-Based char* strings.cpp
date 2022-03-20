#include <iostream>
#include <string>

using namespace std;

int main(){

    // conversion to Pointer-Based char* Strings

    string string1{ "STRINGS" }; // string constructor with char* arg
    const char* ptr1{ nullptr }; // initialize ptr1

    size_t length{ string1.size() };
    char* ptr2{ new char[length + 1] }; // including null
    
    // copy characters from string1 into allocated memory
    string1.copy(ptr2, length, 0); // copy string1 to ptr2 char*
    ptr2[length] = '\0'; // add null terminator

    cout << "string string1 is " << string1
        << "\nstring1 converted to a pointer-based string1 "
        << string1.c_str() << "\nptr1 is ";

    // Assign to pointer ptr1 the const char* returned by
    // function data(). NOTE: this is a potentially dangerous
    // assignment. If string1 is modified, pointer ptr1 can
    // become invalid

    ptr1 = string1.data(); // non-null terminated char array

    // output each character using pointer
    for (size_t i{ 0 }; i < length; ++i) {
        cout << *(ptr1 + i); // use pointer arithmetic
    }

    cout << "\nptr2 is " << ptr2 << endl;
    delete[] ptr2; // reclaim dynamically allocated memory

    system("pause>0");
    return 0;
}
