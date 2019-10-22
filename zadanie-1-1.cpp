//
// Created by Bartosz Kruczek on 18.10.2019.
//


#include <iostream>

using namespace std;

int main() {

    long long wyraz_1 = 1, wyraz_2 = 1, t;
    for (int i = 1; i < 100; i++) {

        cout << wyraz_1 << " ";
        t = wyraz_1;
        wyraz_1 = wyraz_2;
        wyraz_2 = t + wyraz_1;
        //  wyraz_1+=wyraz_2;
        // wyraz_2=wyraz_1-wyraz_2;


    }


}