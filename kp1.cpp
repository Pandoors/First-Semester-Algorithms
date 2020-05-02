//
// Created by Bin Laden on 11/09/2001.
//
#include <iostream>

using namespace std;
const int N = 9;

int czy_mozliwe(int tab[N]) {

    int p = 0, q2, counter = 0, couter_odp = 0;
    int suma = 0, suma_kol = 0;
    for (int q = 0; q < N; q++) {
        suma = 0;
        suma_kol = 0;
        for (int u = 0; u <= q; u++)
            suma += tab[u];   //suma pierwszego fragmentu
        q2 = q + 1;
        while (q2 != N) {

            suma_kol += tab[q2];
            if (suma_kol > suma) {
                break;
            }
            if (suma_kol == suma) {
                suma_kol = 0;
                counter++;
            }

            q2++;
        }
        if (counter > couter_odp) couter_odp = counter;
        counter = 0;
    }
    return couter_odp+1;

}

int main() {
    int tab[N];
for(int i=0;i<N;i++){
    cin>>tab[i];}

cout<<czy_mozliwe(tab);
}
