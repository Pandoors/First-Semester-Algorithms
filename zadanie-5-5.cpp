//
// Created by Bartosz Kruczek on 11/11/2019.
//

#include<iostream>

using namespace std;

struct punkt {
    int x; // zakres wsp. 0..31
    int y; // zakres wsp. 0..31
};
struct dane {
    punkt t[100]; // położenia punktów
    int N; // liczba punktów
};

int main() {
    punkt punkt_1, punkt_2, punkt_3, punkt_4;
    dane dane_1;
    int count=1;
    cin >> dane_1.N;
    for (int i = 0; i < dane_1.N; i++) {
        cin >> dane_1.t[i].x;
        cin >> dane_1.t[i].y;
    }
    for (int i = 0; i < dane_1.N; i++) {
punkt_1=dane_1.t[i];
        for (int j = 0; j < dane_1.N; j++) {

            if(dane_1.t[j].y==punkt_1.y && dane_1.t[j].x!=punkt_1.x){
                punkt_2 = dane_1.t[j];
                count++;
            }

            if((dane_1.t[j].y!=punkt_1.y && dane_1.t[j].x==punkt_1.x)){
                punkt_3 = dane_1.t[j];
                count++;
            }

            if((dane_1.t[j].y==punkt_3.y && dane_1.t[j].x!=punkt_3.x) && ((dane_1.t[j].y!=punkt_2.y && dane_1.t[j].x==punkt_2.x) || (dane_1.t[j].y==punkt_1.y && dane_1.t[j].x!=punkt_1.x))){
                punkt_4 = dane_1.t[j];
                count++;
            }


//            6

//            6

//            1
//            1

//            6
//            1


//            1
//            6

//            3
//            4

//            4
//            5



        }
if(count==4){
    cout<<"znalazłem kwadrat, jest o numerach"<<punkt_1.x<<punkt_1.y<<punkt_2.x<<punkt_2.y<<punkt_3.x<<punkt_3.y<< punkt_4.x<<punkt_4.y;
}
count=1;
    }
}