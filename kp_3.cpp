//
// Created by Bartosz Kruczek on 13/02/2020.
//

#include <iostream>

using namespace std;
struct node {
    int val;
    node *next;
};

node *addnode(node *&first, int elem) {

    node *p = first;
    node *d = new node;
    d->next = nullptr;
    d->val = elem;

    if (!p) {
        first = d;
    } else {
        node *t;
        while (p) {
            t = p;
            p = p->next;
        }
        t->next = d;
    }

    return d;
}

node *deletee(node *&first, int element) {
    node *p = first;

    node *r, *last;
    last = first;

    if (!p) {
        r = NULL;
    } else {
        while (p) {
            if (p->val == element) {
                r = p;

                if (p == first) {
                    first = first->next;
                } else if (!p->next) {
                    last->next = NULL;
                } else {
                    last->next = p->next;
                }

                delete p;
                break;
            }

            last = p;
            p = p->next;
        }
    }

    return r;
}

node *killgarek(node *&first, int garek) {

    node *p = first;

    node *garek_killer, *last;
    last = first;
    if (!p) {
        garek_killer = NULL;
    } else {
        while (p) {
            if (p->val == garek) {
                garek_killer = p;
                if (p == first) {
                    first = first->next;
                }
                if (!p->next) {
                    last->next = NULL;
                } else {
                    last->next = p->next;
                }
                delete p;
                break;
            }
            last = p;
            p = p->next;
        }
    }
    return garek_killer;
}


int func(node *first1, node *first2) {
}


int main() {

    node *liczby1 = nullptr;
    node *liczby2 = nullptr;
    addnode(liczby1, 4);
    addnode(liczby2, 5);
}