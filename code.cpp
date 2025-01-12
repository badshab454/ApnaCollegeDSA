// cpp user input string

#include <iostream>
using namespace std;

int main() {
    
    string firstName;
    cout << "Enter your first name: ";
    getline (cin, firstName);
    cout << "Your name is: " << firstName;
    return 0;
}