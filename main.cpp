#include <iostream>

using namespace std;

bool subtract(int& time, int reset){
    if (time > 0) {
        time--;
        return false;
    } else {
        time = reset;
        return true;
    }
}

int main() {
    int h, m, s;
    cin >> h >> m >> s;

    if (subtract(s, 59))
        if (subtract(m, 59))
            subtract(h, 23);

    cout << h << " " << m << " " << s;
    return 0;
}