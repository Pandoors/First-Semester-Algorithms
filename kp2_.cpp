//
// Created by Bartosz Kruczek on 13/02/2020.
//

#include <iostream>

using namespace std;
const int N = 100;

bool func(int tab1[N], int tab2[N], int suma1, int suma2, int krok, int ile1, int ile2) {

    if (N == krok + 1) {
        return suma1 == suma2 && ile1 == ile2 && ile1 == 0;
    }


    return func(tab1, tab2, suma1 + tab1[krok - 1], suma2 + tab2[krok - 1], krok + 1, ile1 - 1, ile2 - 1) ||
           func(tab1, tab2, suma1 + tab1[krok - 1], suma2, krok + 1, ile1 - 1, ile2) ||
           func(tab1, tab2, suma1, suma2 + tab2[krok - 1], krok + 1, ile1, ile2 - 1) ||
           func(tab1, tab2, suma1, suma2, krok + 1, ile1, ile2);

}

int main() {

    int tab1[N], tab2[N];

    for (int i = N; i > 0; i--) {
        if (func(tab1, tab2, 0, 0, 0, i, i))
            return i;
    }
}