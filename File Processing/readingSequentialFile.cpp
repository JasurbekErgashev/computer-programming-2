#include <iostream>
#include <fstream> // contains file stream processing types
#include <string>
#include <iomanip>
#include <cstdlib> // exit function prototype

using namespace std;

void outputLine(int, const string&, double); // prototype

int main(){
    
    // ifstream constructor opens the file
    ifstream inClientFile("clients.txt", ios::in);

    // exit program if ifstream could not open file
    if (!inClientFile) {
        cerr << "File could not be opened" << endl;
        exit(EXIT_FAILURE);
    }

    cout << left << setw(10) << "Account" << setw(13)
        << "Name" << "Balance\n" << fixed << showpoint;

    int account; // the account number
    string name; // the account name
    double balance; // the account balance

    // display each record in file
    while (inClientFile >> account >> name >> balance) {
        outputLine(account, name, balance);
    }

    return 0;
}

// display single record from file
void outputLine(int account, const string& name, double balance) {
    cout << left << setw(10) << account << setw(13) << name
        << setw(7) << setprecision(2) << right << balance << endl;
}
