//
// Created by Bartosz Kruczek on 19.10.2019.
//
#include <iostream>
#include <cmath>

using namespace std;

double potega(double x) {
    double t = 1;
    for (int i = 0; i < x; i++) {
        t = t * x;
    }
    return t;
}

int main() {

    double x, a = 0, b = 0, liczba, t = 1, s = 0;
    cin >> liczba;

    while (t <= liczba) {
        b++;
        t = potega(b);
    }

    while (abs(potega(s) - liczba) > 1) {
        s = (a + b) / 2;
        if (potega(s) > liczba) b = s;
        if (potega(s) < liczba) a = s;

    }
    cout << s;

}