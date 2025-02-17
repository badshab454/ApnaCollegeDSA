// c plus plus function

#include <iostream>
using namespace std;

int minOfTwoNumbers(int num1, int num2) {
  if (num1 < num2) {
    return num1;
  } else {
    return num2;
  }
}

int main() {
  cout << "min no = " << minOfTwoNumbers(10, 2) << endl;
  return 0;
}