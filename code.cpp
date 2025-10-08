//cpp while loops
#include <iostream>
using namespace std;

int main() {
    //Print the reversed digits of a given number 
    int num = 10829;
    while (num > 0) {
        int lastDigit = num % 10;
        cout << lastDigit;
        num = num / 10;
    }
    cout << endl;
    return 0;
}