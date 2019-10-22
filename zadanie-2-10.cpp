//
// Created by Bartosz Kruczek on 22.10.2019.
//
#include <iostream>

using namespace std;

double f(double x) {
    if (x != 0) {
        return (1 / x);
    } else return 0;
}

int main() {

    double k, fox, p = 0;

    cin >> k;
    for (double i = 1.0; i < k; i += 0.1) {
        fox = f(i);
        p += fox * 0.1;
    }
    cout << p;
}
