#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long total = ceil((double)n / a) * ceil((double)m / a);
    cout << total << endl;
    return 0;
}