// Array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 9, 3, 4, 6};
    int n = sizeof(arr) / sizeof(int);
    int copyArr[n];
    for (int i = 0; i < n; i++) {
        int j = n - i - 1;
        copyArr[i] = arr[j];
    }
    for (int i = 0; i < n; i++) {
        cout << copyArr[i] << " ";
    }
    return 0;
}