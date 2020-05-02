//
// Created by Bartosz Kruczek on 03/02/2020.
//

#include <iostream>

using namespace std;
const int N = 10;

bool lp(int a) {
    return true;
}

int dlugosc(int tab[N][N]) {
    int max = 0, p, q, n, k = 0, p1, q1, n1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            p = tab[i][j];
            q = tab[i][j + 1];
            n = tab[i][j + 2];
            p1 = tab[i][j];
            q1 = tab[i + 1][j];
            n1 = tab[i + 2][j];
            if (q == (p + n) / 2) {
                int r = q - p;
                int temp = 0;
                k = 0;
                while (j + 2 + k < N - 1 && tab[i][j + 2 + k] - n == r) {

                    max++;
                    r = tab[i][j + 2 + k];
                    k++;
                }
            return max+3;
            }
            if (q1 == (p1 + n1) / 2) {
                int r = q - p;
                int temp = 0;
                k = 0;
                while (i + 2 + k < N - 1 && tab[i + 2 + k][j] - n1 == r) {

                    max++;
                    r = tab[i + 2 + k][j];
                    k++;
                }
             return max+3;
            }
        }
    }

}

int main() {


}

