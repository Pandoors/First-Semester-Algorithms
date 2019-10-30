//
// Created by Bartosz Kruczek on 30/10/2019.
//

#include <iostream>

using namespace std;

int main() {

    int a, licz = 0,wynik=0;
    int tab[20] = {0};
    cin >> a;
    while (a != 0) {
        if (a != 0) {
            tab[licz] = a;
        }

        licz++;
        cin >> a;
    }

        for(int i=0;i<licz+1;i++)
            for(int j=1;j<licz;j++)
                if(tab[j-1]>tab[j])
                    swap(tab[j-1], tab[j]);



 cout<<tab[9];
}