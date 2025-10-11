//is prime number?
#include <iostream>
using namespace std;

int main() {
    int num = 13;
    bool isPrime = true;
    for (int i = 2; i <= num - 1; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true) {
        cout << "Your number is prime: " << num << endl;
    } else {
        cout << "Your number is not prime: " << num << endl;
    }
    return 0;
}