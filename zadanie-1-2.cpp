//
// Created by Bartosz Kruczek on 18.10.2019.
//
#include <iostream>

using namespace std;

int main() {

    int n = 2019;

    int minS = n, minU = 0, minD = 0, u, d, t;

    for (int i = 1; i < n; i++) {
        d = i;
        u = n - d;

        if (d > u) break;

        while ((u - d) <= d && (u > d)) {
            t = d;
            d = u - d;
            u = t;
        }

        if ((u + d) < minS) {
            minS = u + d;
            minU = u;
            minD = d;
        }
    }
    cout << minD << " " << minU;
}

