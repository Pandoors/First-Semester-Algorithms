//
// Created by Bartosz Kruczek on 11/11/2019.
//

#include <iostream>

using namespace std;

struct ulamek {

    int l;
    int m;

};

int nwd(int a, int b) {
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }

    if (a > 0)
        return a;
    else
        return a * (-1);
}

int nww(int a, int b) {
    return a * b / nwd(a, b);
}

ulamek skracanie(ulamek u) {
    u.l = u.l / nwd(u.l, u.m);
    u.m = u.m / nwd(u.l, u.m);

}

void rozklad(int a) {

    while (a != 1) {



    }


}


ulamek odejmowanie(ulamek u1, ulamek u2) {
    ulamek wynik;
    int mianownik_wyniku = nww(u1.m, u2.m);
    u1.l *= mianownik_wyniku / u1.m;
    u2.m *= mianownik_wyniku / u2.m;
    wynik.l = u1.l - u2.l;
    wynik.m = mianownik_wyniku;

    return skracanie(wynik);
}

bool rowne(ulamek a, ulamek b) {
    a = skracanie(a);
    b = skracanie(b);
    return a.l == b.l && a.m == b.m;
}

ulamek dzielenie(ulamek u1, ulamek u2) {
    if (u2.l == 0) {
        cout << "nie można przez 0, podaj inna liczbe ";
        while (u2.l == 0) {
            cin >> u2.l;
        }
    }
    ulamek wynik;
    wynik.l = u1.l * u2.m;
    wynik.m = u1.m * u2.l;

    if (wynik.m < 0) {
        wynik.l *= -1;
        wynik.m *= -1;
    }

    return skracanie(wynik);

}

int ciagi(ulamek t[100]) {
    int LA = 0;
    int LG = 0;

    //ciag arytmetyczny
    int i = 0;
    while (i < 98) {
        if (rowne(odejmowanie(t[i + 2], t[i + 1]), odejmowanie(t[i + 1], t[i]))) {
            ulamek r = odejmowanie(t[i + 2], t[i + 1]);
            // int dl = 3;
            while (i + 3 <= 99 && rowne(odejmowanie(t[i + 3], t[i + 2]), r)) {
                i++;

            }
            LA++;
            i = i + 2;
        } else {
            i++;
        }
    }

    //ciag geometryczny
    i = 0;
    while (i < 98) {
        if (t[i + 1].l == 0 || t[i].l == 0)
            i++;
        else if (rowne(dzielenie(t[i + 2], t[i + 1]), dzielenie(t[i + 1], t[i]))) {

            ulamek r = dzielenie(t[i + 2], t[i + 1]);
            // int dl = 3;
            while (i + 3 <= 99 && rowne(dzielenie(t[i + 3], t[i + 2]), r)) {
                i++;

            }
            LG++;
            i = i + 2;

        } else {
            i++;
        }
    }

    if (LA > LG)
        return 1;
    if (LA < LG) return -1;
    if (LA == LG) return 0;

}

int main() {
    ulamek t[100];
    // cout << ciagi(t);
}