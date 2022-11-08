#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n;
    if (n % 10 == 0 or (n % 100 >= 11 and n % 100 <= 19)) cout << " metu";
    else cout << " metai";
    return 0;
}