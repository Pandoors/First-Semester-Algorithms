//
// Created by Bartosz Kruczek on 25/11/2019.
//
#include<iostream>

using namespace std;
const int N = 9;

void wypisz(int t[N][N]) {

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cout << t[i][j];
}



bool mozliwe(int t[N][N], int i, int w, int k, int &nw, int &nk) {
    int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
    int dy[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
    nk = k + dx[i];
    nw = w + dy[i];
    return nk >= 0 && nw >= 0 && nk < N && nw < N && t[nw][nk] == 0;
}

bool skok(int t[N][N], int w, int k, int n, bool &koniec) {
    t[w][k] = n;
    int nw, nk;
    if (n == N) wypisz(t);
    else {
        for (int i = 0; i < 8 and !koniec; i++) {
            if (mozliwe(t, i, w, k, nw, nk))
                skok(t, nw, nk, n + 1, koniec);
        }
    }
    t[w][k] = 0;

}

int main() {


}
