#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    if ((x < 100 or x > 999) and x % 66 == 0) cout << "TAIP";
    else cout << "NE";
    return 0;
}