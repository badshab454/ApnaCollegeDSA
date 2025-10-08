//cpp while loops
#include <iostream>
using namespace std;

int main() {
    //Print the digits of a given number 
    int num = 10829;
    int sum = 0;
    while (num > 0) {
        int lastDigit = num % 10;
        sum += lastDigit;
        num = num / 10;
    }
    cout << sum << endl;
    return 0;
}