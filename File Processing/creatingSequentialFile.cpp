#include <iostream>
#include <fstream> // contains file stream processing types
#include <string>
#include <cstdlib> // exit function prototype

using namespace std;

int main(){
    // ofstream constructor opens file
    ofstream outClientFile;
    outClientFile.open("clients.txt", ios::out);

    // exit program if unable to create file
    if (!outClientFile) { // overloaded ! operator
        cerr << "File could not be opened" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Enter the account, name, and balance.\n"
        << "Enter end-of-file to end input.\n? ";

    int account; // the account number
    string name; // the account owner's name
    double balance; // the account balance

    // read account, name and balance from cin, then place in file

    while (cin >> account >> name >> balance) {
        outClientFile << account << ' ' << name << ' ' << balance << endl;
        cout << "? ";
    }

    outClientFile.close();

    return 0;
}
