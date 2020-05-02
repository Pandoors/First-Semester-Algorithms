#include <iostream>

using namespace std;

struct node {
    int value;
    node *next = nullptr;
};

void dodaj(node *&last, node *elementDoDodania) {
    if (last) {
        last->next = elementDoDodania;
    }
    last = elementDoDodania;
}

node *scalIter(node *l, node *r) {
    node *result = nullptr;
    node *last = nullptr;
    while (l or r) {
        if (!r or (l and l->value <= r->value)) {
            dodaj(last, l);
            l = l->next;
        } else {
            dodaj(last, r);
            r = r->next;
        }
        if (!result) {
            result = last;
        }
    }
    return result;
}

//node *result = nullptr;
//node *last = nullptr;
//node *result = scalRekur(l, r, result, last);
void scalRekur(node *l, node *r, node *&result, node *last) {
    if (l or r) {
        if (!r or (l and l->value <= r->value)) {
            dodaj(last, l);
            l = l->next;
        } else {
            dodaj(last, r);
            r = r->next;
        }
        if (!result) {
            result = last;
        }
        scalRekur(l, r, result, last);
    }
}

//PONIZEJ KOD TYLKO DO TESTOWANIA

void wypisz(node *nodes) {
    while (nodes) {
        cout << nodes->value << endl;
        nodes = nodes->next;
    }
}

//wartosci nalezy podawac w kolejnosci rosnacej
int main() {
    node *l = nullptr;
    node *r = nullptr;
    node *lLast = nullptr;
    node *rLast = nullptr;

    int val;
    cin >> val;
    while (val != 0) {
        node *toAdd = new node;
        toAdd->value = val;
        dodaj(lLast, toAdd);
        if (!l) {
            l = lLast;
        }
        cin >> val;
    }
    cin >> val;
    while (val != 0) {
        node *toAdd = new node;
        toAdd->value = val;
        dodaj(rLast, toAdd);
        if (!r) {
            r = rLast;
        }
        cin >> val;
    }

    cin >> val;
    if (val == 'r') {
        node *result = nullptr;
        node *last = nullptr;
        scalRekur(l, r, result, last);
        wypisz(result);
    }
    cout << endl;
    wypisz(scalIter(l, r));
}