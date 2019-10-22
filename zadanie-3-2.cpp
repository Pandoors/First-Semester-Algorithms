//
// Created by Bartosz Kruczek on 22.10.2019.
//
#include <iostream>

using namespace std;

int main() {

    int tab[10] = {0}, tab2[10] = {0};

    int liczba1, liczba2;
    cin >> liczba1 >> liczba2;

    while (liczba1 != 0) {
        tab[liczba1 % 10]++;
        liczba1 = liczba1 / 10;
    }

    while (liczba2 != 0) {
        tab2[liczba2 % 10]++;
        liczba2 = liczba2 / 10;
    }

    for (int i = 0; i < 10; i++) {
        if (tab[i] != tab2[i]) {
            cout << "liczby nie składają się z tych samych cyfr";
            return 0;
        }
    }
    cout << "Owszem, liczby skadają się z tych samych cyfr";

}
