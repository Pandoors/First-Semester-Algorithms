//
// Created by Bartosz Kruczek on 22.10.2019.
//

#include<iostream>

using namespace std;

int fibo(int q) {
    int a = 1, b = 1, t;
    for (int i = 0; i < q; i++) {
        t = a;
        a = b;
        b = t + a;
    }
    return b;
}

int main() {
    bool isFiboSum = false;
    int n;
    cin >> n;
    int t, s, s_1 = 0, p = 1, q = 1, wyraz_1 = 1, wyraz_2 = 1;

    while (!isFiboSum) {
        s_1 = 0, p = 1, q = 1;
        s = n + 1;
        while (s != s_1) {
            s_1 = fibo(p) + fibo(q);
            while (fibo(q) < s) {
                t = wyraz_2;
                wyraz_1 = wyraz_2;
                wyraz_2 = wyraz_1 + wyraz_2;
                q++;
            }
            if (p == q) {

                cout << "nie istnieje podciąg";
                break;
            }
            if (fibo(p) + fibo(q) > s)
                q = q - 1;
            if (fibo(p) + fibo(q) < s)
                p = p + 1;

        }
        if (s == s_1) isFiboSum = true;

    }

    cout << s;

}