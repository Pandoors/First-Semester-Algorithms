//
// Created by Bartosz Kruczek on 19.10.2019.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    int i = 1;
    bool result = false;

    cin >> n;

    while (i * i + i + 1 <= n && !result) {
        if (n % (i * i + i + 1) == 0)
            result = true;
        else
            i++;
    }

    if (result)
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;

    return 0;
}