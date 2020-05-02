//
// Created by Bartosz Kruczek on 25/11/2019.
//
#include  <iostream>

using namespace std;


const int N = 10;

//odwazniki(t, 0, do_odwazenia);
bool odwazniki(int t[N], int odwaznik, int do_odwazenia) {
    if (do_odwazenia == 0) {
return true;
}
if (do_odwazenia < 0) {
return false;
}
if (odwaznik == N) {
return false;
}
return (odwazniki(t, odwaznik + 1, do_odwazenia - t[odwaznik]) ||
odwazniki(t, odwaznik + 1, do_odwazenia));
}

int main() {
    int t[N], do_odwazenia;
    cin >> do_odwazenia;

    for (int i = 0; i < N; i++) {

        cin >> t[i];

    }
if(odwazniki(t, 0, do_odwazenia)){
    cout<<"jest git";
} else cout<<"no niezbyt";
}
