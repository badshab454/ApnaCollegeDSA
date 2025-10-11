//Atcoder contest ABC=>AC
#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    int middle = S.length()/2;
    S.erase(middle, 1);
    cout << S << endl;
    return 0;
}
