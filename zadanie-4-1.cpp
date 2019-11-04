//
// Created by Bartosz Kruczek on 04/11/2019.
//

#include<iostream>

using namespace std;
const int MAX = 6;

int main() {

    int n = 1, dody = 1, minu = 0, k = 0;
    int dr=0,xx=1;
    int t[MAX][MAX]={0};

    for (int am = 0; am < MAX; am++) {
        for (int bj = 0+k; bj < MAX-k; bj++) {
            t[am][bj] = n;
            n++;
        }
        for (int lu = dody; lu < MAX - minu; lu++) {
            t[lu][MAX - k] = n;
            n++;
        }
        k++;
        dody++;
        minu++;
        for(int b2=MAX-dr-1;b2>0+dr;b2--){
            t[MAX-am-1][b2-1]=n;
            n++;
        }
        dr++;
        for(int l2 = MAX-xx-1;l2>0+xx;l2--){
            t[l2][am]=n;
            n++;
        }


    }

    for (int am = 0; am < MAX; am++){
        for (int amm = 0; amm < MAX; amm++) {
            cout << t[am][amm]<<" ";
        }
    cout<<endl;}
}