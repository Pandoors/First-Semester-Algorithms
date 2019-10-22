//
// Created by Bartosz Kruczek on 19.10.2019.
//
#include <iostream>

using namespace std;

int binarna(int b) {
    int c = 0, k = 1;
    while (b != 0) {
        c += (b % 2) * k;
        b = b / 2;
        k = k * 10;
    }
    return c;
}

int main() {

    int n, k = 1, odw_n = 0, bin_n, bin_pal_n = 0, k1 = 1, nxd, binimini;
    cin >> n;
    cout << binarna(n);
    bin_n = binarna(n);
    binimini = bin_n;
    nxd = n;
    while (n != 0) {
        odw_n += (n % 10) * k;
        n = n / 10;
        k = k * 10;
    }
    if (nxd == odw_n) {
        cout << "palindrom w systemie 10-nym" << endl;
    } else cout << "nopppe" << endl;

    if (bin_n % 10 == 0) {
        cout << "nie jest pal w 2-ym" << endl;
    } else {
        while (bin_n != 0) {
            bin_pal_n += (bin_n % 10) * k1;
            bin_n = bin_n / 10;
            k1 = k1 * 10;
        }
        cout << endl << bin_pal_n;
        if (binimini == bin_pal_n) {
            cout << "tak" << endl;

        } else {
            cout << "nie";

        }
    }


}