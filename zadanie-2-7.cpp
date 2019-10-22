//
// Created by Bartosz Kruczek on 21.10.2019.
//
#include<iostream>
#include<cmath>

using namespace std;

int main() {

    int x, a, b;
    cin >> x;
//cout<<round(sqrt(x));

    for (int i = round(sqrt(x)); i >= 1; i--) {

        if (x % i == 0) {
            a = i;
            break;
        }

    }
    b = x / a;
    cout << a << "  " << b;


}
