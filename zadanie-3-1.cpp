//
// Created by Kasia Ręka on 22.10.2019.
//

#include <iostream>
#include <cmath>

using namespace std;

char getDigit(int num, int base, int index) {
    int digit = (num / (int) pow(base, index)) % base;

    char res;
    if (digit < 10)
        res = '0' + digit;
    else
        res = 'A' - 10 + digit;
    return res;
}

int main() {

    int num, base;
    cin >> num >> base;

    int length = log(num) / log(base) + 1;

    for (int i = length - 1; i >= 0; i--)
        cout << getDigit(num, base, i);

    cout << endl;
    return 0;

}