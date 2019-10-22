//
// Created by Bartosz Kruczek on 21.10.2019.
//
#include <iostream>

using namespace std;

int main() {

//    long long int n, n_1 = 1;
//    cin >> n;
//    for(long long int i=1;i<=n;i++){
//        n_1=n_1*i;
//    }
//cout<<n_1%10;
//}
    int a = 1, b;
    cin >> b;
    for (int i = 2; i <= b; i++) {
        a *= i;
        if (a % 10 == 0)a = a / 10;
        a = a % 10;
    }
    if (a % 10 == 0) a = a / 10;
    cout << a;

}