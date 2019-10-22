//
// Created by Bartosz Kruczek on 19.10.2019.
//

#include <iostream>

using namespace std;

int main() {

    int n, a = 1;
    cin >> n;
    while (a * a <= n) {
        a++;

    }
    if (a == 1) cout << a;
    else cout << a - 1;
}