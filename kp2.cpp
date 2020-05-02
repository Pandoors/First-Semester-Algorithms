//
// Created by Bartosz Kruczek on 01/02/2020.
//

#include <iostream>

using namespace std;
const int N = 16;

void pary(int t1[N], int t2[N], string komb1, string komb2, int s1, int s2, int n, int &max, ) {

    if (s1 == s2) {
        if (max < n)
            max = n;
    }
    if (n == N)
        return;
    int power1 = 0, power2 = 0;
    for (int i = 0; i < N; i++) {
        if (komb1[i] == '1') {
            power1++;
            s1 += t1[i] * power1;
        }
        if (komb2[i] == '1') {
            power2++;
            s2 += t2[i] * power2;
        }
    }
    pary(t1, t2, komb1 + '1', komb2 + '0', s1, s2, n + 1, max);
    pary(t1, t2, komb1 + '0', komb2 + '1', s1, s2, n + 1, max);

}


int func(int t1[N], int t2[N]) {
    int max = -1;

    pary(t1, t2, "", "", 0, 0, 0, max);
    return max;
}
