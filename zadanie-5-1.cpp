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
    return skracanie(wynik);
}

ulamek mnozenie(ulamek u1, ulamek u2) {

    ulamek wynik;
    wynik.l = u1.l * u2.l;
    wynik.m = u1.m * u2.m;
    return skracanie(wynik);

}

ulamek dzielenie(ulamek u1, ulamek u2) {
if(u2.l == 0){
    cout<<"nie można przez 0, podaj inna liczbe ";
    while(u2.l==0){
        cin>>u2.l;
    }
}
    ulamek wynik;
    wynik.l = u1.l * u2.m;
    wynik.m = u1.m * u2.l;

    if(wynik.m<0){
        wynik.l*=-1;
        wynik.m*=-1;
    }

    return skracanie(wynik);

}
ulamek potegowanie(ulamek u1,int a){

ulamek wynik;
wynik.l=1;
wynik.m=1;
for(int i=0;i<a;i++){
    wynik.l*=u1.l;
    wynik.m*=u1.m;
}

return wynik;
}
int main() {
    ulamek ulamek1, ulamek2;
int wykladnik;
    ulamek1 = wczytaj_ulamek();
    ulamek2 = wczytaj_ulamek();
    cin>>wykladnik;

}
