#include<iostream>

using namespace std;

struct node {

    int w;
    node *next;

};

void wypisywanie(node *last) {

    while (last != nullptr) {

        cout << last->w;
        last = last->next;
    }
}

node *add(node *&liczby, int wartosc) {
    node *p = liczby;

    node *n = new node;
    n->w = wartosc;
    n->next = nullptr;

    if (!p) {
        liczby = n;
    } else {
        node *last = new node();
        while (p) {
            last = p;
            p = p->next;
        }
        last->next = n;
    }
    return n;

}

int main() {

    node *liczby = nullptr;
    add(liczby, 3);
    wypisywanie(liczby);

}


