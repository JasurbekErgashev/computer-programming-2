#include <iostream>
#include <string>

using namespace std;

int main(){

    // substrings

    string string1{ "The airplane landed on time." };

    // retrieve substring "plane" which
    // begins at subscript 7 and consists of 5 characters
    cout << string1.substr(7, 5) << endl;

    system("pause>0");
    return 0;
}
