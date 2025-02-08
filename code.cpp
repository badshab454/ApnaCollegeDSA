// cpp while loop

#include <iostream>
using namespace std;

int main() {
  int i = 0;
  int n = 3;
  int sum = 0;
  while (i <= n) {
    sum += i;
    i++;
  }
  cout << "Sum = " << sum << endl;
}