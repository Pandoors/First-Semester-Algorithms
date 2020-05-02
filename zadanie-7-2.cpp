//
// Created by Bartosz Kruczek on 25/11/2019.
//
#include <iostream>
#include <cmath>

using namespace std;
const int N = 100;

bool czyPierwsza(int t[N], int pos, int dlugosc) {
//zamiana
    int k = 1, w = 0;
    for (int i = pos + dlugosc; i >= pos; i--) {
        w += k * t[i];
        k = k * 2;
    }
//koniec zamiany
    if (w < 2)
        return false;
    else {
        for (int i = 1; i < sqrt(w); i++)
            if (w % i == 0)
                return false;
        return true;
    }

}

void potnij(int t[N], int pos = 0, int checked = 0, string res = "") {
    for (int i = 1; i < min(N - checked, 30) + 1; i++) {
        if (czyPierwsza(t, pos, i)) {
            for (int j = pos; j < pos + i; j++)
                res += to_string(t[j]);

            if (pos + i == N) {
                cout << res << endl;
                return;
            }
            potnij(t, pos + i, checked + i, res += " ");
        }
    }


}

int main() {


}