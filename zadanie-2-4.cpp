//
// Created by Bartosz Kruczek on 21.10.2019.
//

#include <iostream>

using namespace std;


int main() {

    int N, liczba, i;
    cin >> N;
    for (int i1 = 1; i1 <= N; i1++) {
        i = i1;

        while (i != 1) {

            if (i % 2 == 0)
                i = i / 2;
            if (i % 3 == 0)
                i = i / 3;
            if (i % 5 == 0)
                i = i / 5;

            if (i != 1 && i % 5 != 0 && i % 2 != 0 && i % 3 != 0) {
                cout << i1 << " nie jest taka " << endl;
                break;
            }

        }
        if (i == 1)
            cout << i1 << " jest git" << endl;
    }

}