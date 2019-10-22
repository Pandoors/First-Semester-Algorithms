//
// Created by Bartosz Kruczek on 21.10.2019.
//

#include <iostream>

using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    cout << a / b << ",";
    a -= (a / b) * b;
    a *= 10;

    for (int i = 0; i < n; i++) {
        cout << a / b;
        a -= (a / b) * b;
        a *= 10;

    }
    return 0;
}
