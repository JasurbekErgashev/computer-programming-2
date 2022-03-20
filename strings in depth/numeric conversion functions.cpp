#include <iostream>
#include <sstream> 
#include <string>

using namespace std;

int main(){

    // C++11 Numeric Conversion Functions

    int num{ 123 };
    string str = to_string(num);
    cout << str;
    
    // from strings to numeric types

    string str1{ "1" }; int num1{ stoi(str1) }; 
    cout << num1 << endl;

    string str2{ "1234454323" }; long num2{ stol(str2) }; 
    cout << num2 << endl;
    

    string str3{ "123.456" }; float num3{ stof(str3) }; 
    cout << num3 << endl;

    string str4{ "3555.5454433" }; double num4{ stod(str4) };
    cout << num4 << endl;

    string s("100hello");
    int covertedInt = stoi(s);

    //int convetedInt = stoi(s, nullptr, 10);
    //int convertedInt = stoi(s, &index, 2);

    // string to floating point numbers

    string s1("123.45hello");
    double convertedDouble = stod(s);

    system("pause>0");
    return 0;
}
