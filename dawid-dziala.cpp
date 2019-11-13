//
// Created by Bartosz Kruczek on 13/11/2019.
//

#include <iostream>

using namespace std;

struct hetman {
    int w = -1; // wiersz 0..99
    int k = -1; // kolumna 0..99
};

struct dane {
    hetman t[100]; // polozenie hetmanow
    int N; // liczba hetmanow
};

bool sprawdz(hetman t[]) {
    bool mainFlag = true;

    for (int i=0; i<100 && mainFlag; i++) {
        if (t[i].w == -1)
            break;

        for (int j=0; j<100 && mainFlag; j++) {
            if (t[j].w == -1)
                break;

            if (t[i].w == t[j].w && t[j].k == t[j].k)
                continue;

            if (t[i].w == t[j].w || t[i].k == t[j].k)
                mainFlag = false;

            if (t[i].w - t[j].w == t[i].k - t[j].k)
                mainFlag = false;
        }
    }

    return mainFlag;
}

int main() {
    dane szachownica;

    szachownica.N = 3;

    szachownica.t[0].w = 0;
    szachownica.t[0].k = 0;

    szachownica.t[1].w = 7;
    szachownica.t[1].k = 6;

    szachownica.t[2].w = 2;
    szachownica.t[2].k = 1;

    if (sprawdz(szachownica.t))
        cout << "Zaden z hetmanow nie szachuje sie!" << endl;
    else
        cout << "Ktorys z hetmanow szachuje sie z innym" << endl;

    return 0;
}