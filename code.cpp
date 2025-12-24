#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    int total = 0, coin = 0, mine =0;
    for (int i = 0; i < n; i++) {
        total += a[i];
    }
    for (int i = 0; i < n; i++) {
        coin++;
        mine += a[i];
        if (mine > total - mine) {
            break;
        }
    }
    cout << coin << endl;
    return 0;
}