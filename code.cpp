// cpp foreach loop
#include <iostream>
using namespace std;

int main() {
  int value[2] = {1, 2};
  for (int i : value) {
    cout << i << " ";
  }
}