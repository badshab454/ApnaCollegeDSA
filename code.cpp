//A. Expression
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b;
    cin >> b;
    int c;
    cin >> c;
    int one = a + b + c;
    int two = a + b * c;
    int three = a * b + c;
    int four = a * b * c;
    int five = (a + b) * c;
    int six  = a * (b + c);
    int maximum = max({one, two, three, four, five, six});
    cout << maximum << endl;
    return 0;
}