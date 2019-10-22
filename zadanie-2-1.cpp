//
// Created by Bartosz Kruczek on 19.10.2019.
//
#include <iostream>

using namespace std;

int main() {

    int q = 1, q1 = 1, p = 1, p1 = 1, n;
    cin >> n;
    if (n == 1) {
        cout << "Istnieje";
        return 0;
    }
    while (q <= n) {

        q += q1;
        q1 = q - q1;

    }
    while (p != q) {
        if (p * q == n) {
            cout << "istnieje";
            return 0;
        } else if (p * q < n) {
            p += p1;
            p1 = p - p1;
        } else {
            q1 = q - q1;
            q = q - q1;
        }
    }
    cout << "nie istnieje";
}
