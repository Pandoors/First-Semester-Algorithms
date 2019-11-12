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

int main() {
    dane dane_1;
//   int count=1;
    cin >> dane_1.N;
    for (int i = 0; i < dane_1.N; i++) {
        cin >> dane_1.t[i].x;
        cin >> dane_1.t[i].y;
    }


}