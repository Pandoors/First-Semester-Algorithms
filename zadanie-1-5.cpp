//
// Created by Bartosz Kruczek on 19.10.2019.
//

#include <iostream>

using namespace std;

int main() {

    double a, p;
    cin >> p;
    a = p / 2;
    while (abs(p / a - a) > 0.0001) {
        a = (p / a + a) / 2;
    }
    cout << a;
}