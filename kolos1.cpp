//
// Created by Bartosz Kruczek on 08/01/2020.
//

#include<iostream>
#include <cmath>

const int N = 5;
using namespace std;

bool pierwsza(int a) {

    for (int i = 2; i < sqrt(a); i++)
        if (a % i == 0)
            return false;
    return true;
}

bool suma_to_iloczyn(int s) {
    int t = 2, licz = 0, a;
    while (s != 0) {    //todo: powinno być 0 a nie 1
        if (licz == 2) return true;

        if (s % t == 0) {
            a = s / t;
            s = s / t;
        }
        if (pierwsza(a))
            licz++;
        return false;
    }
}

bool cut(int t1[N], int t2[N], int p1, int p2, int q1, int q2) {
    int suma1 = 0, suma2 = 0;

    int dl1 = 0, dl2 = 0;
    if (p1 > N || p2 > N || q1 > N || q2 > N) {
        //cout << "nie";
        return false;
    }

    for (int i = p1; i < q1; i++) {
        suma1 += t1[i];
        dl1++;
    }
    for (int i = p2; i < q2; i++) {
        suma2 += t2[i];
        dl2++;
    }
    if (suma_to_iloczyn(suma1 + suma2) && dl1 == dl2) {
        cout << "tak";
        return true;
    } else {
        return cut(t1, t2, p1 + 1, p2, q1, q2) || cut(t1, t2, p1, p2 + 1, q1, q2) || cut(t1, t2, p1, p2, q1 + 1, q2) ||
               cut(t1, t2, p1, p2, q1, q2 + 1);
    }
}

int main() {

    int t1[N] = {0}, t2[N] = {0};

    t1[0] = 1;
    t2[2] = 5;
    t2[4] = 2;
    t1[1] = 2;



    cut(t1, t2, 0, 0, 0, 0);
}