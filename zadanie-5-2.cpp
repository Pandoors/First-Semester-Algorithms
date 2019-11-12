//
// Created by Bartosz Kruczek on 11/11/2019.
//

#include<iostream>

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

ulamek wczytaj_ulamek() {
    ulamek ulamek;
    cin >> ulamek.l;
    cin >> ulamek.m;
    if (ulamek.m == 0) {
        cout << "mianownik nie moze wynosic 0";
        while (ulamek.m == 0) {
            cin >> ulamek.m;
        }
    }
    if (ulamek.m < 0) {
        ulamek.l *= -1;
        ulamek.m *= -1;
    }
    return ulamek;
}

ulamek wypisz_ulamek(ulamek ulamek) {
    cout << ulamek.l << "  " << ulamek.m;
}

ulamek dodawanie(ulamek u1, ulamek u2) {
    ulamek wynik;
    int mianownik_wynik = nww(u1.m, u1.m);
    u1.l *= mianownik_wynik / u1.m;
    u2.l *= mianownik_wynik / u2.m;
    wynik.l = u1.l + u2.l;
    wynik.m = mianownik_wynik;
    return wynik;
}

ulamek odejmowanie(ulamek u1, ulamek u2) {
    ulamek wynik;
    int mianownik_wyniku = nww(u1.m, u2.m);
    u1.l *= mianownik_wyniku / u1.m;
    u2.m *= mianownik_wyniku / u2.m;
    wynik.l = u1.l - u2.l;
    wynik.m = mianownik_wyniku;
    return wynik;
}

ulamek mnozenie(ulamek u1, ulamek u2) {

    ulamek wynik;
    wynik.l = u1.l * u2.l;
    wynik.m = u1.m * u2.m;
    return wynik;

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

    return wynik;

}

ulamek potegowanie(ulamek u1, int a) {

    ulamek wynik;
    wynik.l = 1;
    wynik.m = 1;
    for (int i = 0; i < a; i++) {
        wynik.l *= u1.l;
        wynik.m *= u1.m;
    }

    return wynik;
}

ulamek X;
ulamek Y;

string wynik_ukladu(ulamek a1, ulamek b1, ulamek c1, ulamek a2, ulamek b2, ulamek c2) {

    ulamek w = odejmowanie(mnozenie(a1, b2), mnozenie(b1, a2));
    ulamek wx = odejmowanie(mnozenie(c1, b2), mnozenie(b1, c2));
    ulamek wy = odejmowanie(mnozenie(a1, c2), mnozenie(c1, a2));


    if (w.l == 0) {
        if (wx.l == 0 && wy.l == 0) {
            return "nieoznaczony";
        } else {
            return "sprzeczny";
        }
    }
    X = dzielenie(wx, w);
    Y = dzielenie(wy, w);
    return "oznaczony";


}

int main() {

    cout << "Podaj wspolczynniki ukladu rownan:" << endl;
    cout << "a1x + b1y = c1" << endl;
    cout << "a2x + b2y = c2" << endl;
    ulamek a1 = wczytaj_ulamek();
    ulamek b1 = wczytaj_ulamek();
    ulamek c1 = wczytaj_ulamek();
    ulamek a2 = wczytaj_ulamek();
    ulamek b2 = wczytaj_ulamek();
    ulamek c2 = wczytaj_ulamek();
    string typ = wynik_ukladu(a1, b1, c1, a2, b2, c2);
if(typ == "nieoznaczony")
    cout<<"nieoznaczony";
if(typ == "sprzeczny")
    cout<<"jest sprzeczny";
if(typ == "oznaczony"){
    cout << "x = ";
    wypisz_ulamek(X);
    cout << "y = ";
    wypisz_ulamek(Y);
}

}
