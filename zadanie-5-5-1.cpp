//
// Created by Bartosz Kruczek on 12/11/2019.
//

#include<iostream>

using namespace std;

struct punkt {
    int x; // zakres wsp. 0..31
    int y; // zakres wsp. 0..31
};
struct dane {
    punkt t[100]; // położenia punktów
    int N; // liczba punktów
};

//lewy dol i prawy gorny
bool czy_puste(punkt a, punkt d, bool obsz[32][32]) {
    for (int i = 0; i < 32; i++)
        for (int j = 0; j < 32; j++) {
            if (obsz[i][j]) {
                if (j > a.x && i < d.x && i > a.y && j < d.y) {
                    return false;
                }
            }
        }
    return true;
}


int main() {
    dane dane_1;
    int count = 1;
    bool obsz[32][32];
    int bok;
    cin >> dane_1.N;
    for (int i = 0; i < 32; i++)
        for (int j = 0; j < 32; j++)
            obsz[i][j] = false;
    for (int i = 0; i < dane_1.N; i++) {
        cin >> dane_1.t[i].x;
        cin >> dane_1.t[i].y;
        obsz[dane_1.t[i].x][dane_1.t[i].y] = true;
    }
    for (int i = 31; i > 0; i--)
        for (int j = 0; j < 32; j++) {

            if (obsz[i][j]) {


//sprawdzam w lewo w dol
//sprawdzam w lewo w gore
                for (int a = i - 1; a >= 0; a--) {
                    if (obsz[a][j]) {
                        bok = i - a;
                        if (obsz[a - bok][j]) {
                            if (obsz[a - bok][j + bok]) {
                                if (czy_puste({i, j}, {a - bok, j}, obsz)) {
                                    cout << "dziala..dupa";
                                }

                            }

                        }
                    }
                    if (obsz[a][j]) {
                        bok = i - a;
                        if (obsz[a + bok][j]) {
                            if (obsz[a + bok][j + bok]) {
                                if (czy_puste({a, j}, {a + bok, j + bok}, obsz)) {
                                    cout << "dziala..dupa";
                                }

                            }

                        }
                    }
                }







//sprawdzam w prawo w dol
                for (int a = i + 1; a > 32; a++) {
                    if (obsz[a][j]) {
                        bok = i - a;
                        if (obsz[a - bok][j]) {
                            if (obsz[a - bok][j + bok]) {
                                if (czy_puste({i, j}, {a - bok, j}, obsz)) {
                                    cout << "dziala..dupa";
                                }

                            }

                        }
                    }
                }


                for (int a = i - 1; a >= 0; a--) {
                    if (obsz[a][j]) {
                        bok = i - a;
                        if (obsz[a - bok][j]) {
                            if (obsz[a - bok][j + bok]) {
                                if (czy_puste({a, j}, {a + bok, j + bok}, obsz)) {
                                    cout << "dziala..dupa";
                                }
                            }
                        }
                    }
                }
            }
        }
}