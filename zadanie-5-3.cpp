//
// Created by Bartosz Kruczek on 11/11/2019.
//

#include <iostream>

using namespace std;

struct hetman {
    int w;
    int k;
};
struct dane {
    hetman t[100] = {0, 0};
    int N;
};
struct pole {
    int w;
    int k;
};

int main() {
    pole pole_1;
    bool szachownica[100][100];
    hetman hetman_sprawdzany;
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            szachownica[i][j] = false;
    dane dane;
    cin >> dane.N;
    for (int i = 0; i < dane.N; i++) {
        cin >> dane.t[i].k;
        cin >> dane.t[i].w;
        szachownica[dane.t[i].k][dane.t[i].w] = true;
    }
    for (int i = 0; i < dane.N; i++) {
        hetman_sprawdzany = dane.t[i];

        for (int wk = 0; wk < 100; wk++) {
            if (szachownica[hetman_sprawdzany.k][wk]) {
                cout << "hetman" << i << " szachuje innego w wierszu";
            }

            if (szachownica[wk][hetman_sprawdzany.w]) {
                cout << "hetman" << i << "szachuje innego w kolumnie";
            }
        }
        pole_1.k = hetman_sprawdzany.k;
        pole_1.w = hetman_sprawdzany.w;
        while (pole_1.k < 100 && pole_1.w < 100 && pole_1.k >= 0 && pole_1.w >= 0) {
            pole_1.k++;
            pole_1.w--;
            if (szachownica[pole_1.w][pole_1.k])
                cout << "hetman" << i << " szachuje innego na ukos";

        }

        pole_1.k = hetman_sprawdzany.k;
        pole_1.w = hetman_sprawdzany.w;
        while (pole_1.k < 100 && pole_1.w < 100 && pole_1.k >= 0 && pole_1.w >= 0) {
            pole_1.k++;
            pole_1.w++;
            if (szachownica[pole_1.w][pole_1.k])
                cout << "hetman" << i << " szachuje innego na ukos";

        }

        pole_1.k = hetman_sprawdzany.k;
        pole_1.w = hetman_sprawdzany.w;
        while (pole_1.k < 100 && pole_1.w < 100 && pole_1.k >= 0 && pole_1.w >= 0) {
            pole_1.k--;
            pole_1.w++;
            if (szachownica[pole_1.w][pole_1.k])
                cout << "hetman" << i << " szachuje innego na ukos";

        }

        pole_1.k = hetman_sprawdzany.k;
        pole_1.w = hetman_sprawdzany.w;
        while (pole_1.k < 100 && pole_1.w < 100 && pole_1.k >= 0 && pole_1.w >= 0) {
            pole_1.k--;
            pole_1.w--;
            if (szachownica[pole_1.w][pole_1.k])
                cout << "hetman" << i << " szachuje innego na ukos";

        }


    }
}