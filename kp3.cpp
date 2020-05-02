//
// Created by Bartosz Kruczek on 03/02/2020.
//

#include <iostream>

using namespace std;
struct node {
    int val;
    node *next;
};

node *add(node *&first, int element) {
    node *n = first;
    node *d = new node;
    d->next = nullptr;
    d->val = element;
    if (!n) {
        first = d;
    } else {
        node *t;
        while (n) {
            t = n;
            n = n->next;
        }
        t->next = d;
    }
    return d;
}

node *printt(node *first) {
    node *p = first;
    while (p) {
        cout << p->val;
        p = p->next;
    }

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

bool czy_wyst(node *list, int elem) {

    if (list)
        while (list) {
            if (list->val == elem) return true;
            list = list->next;
        }
    return false;
}

node *powtarasz(node *l, node *r) {
    node *lk = l;
    node *lr = r;
    node *result = nullptr;
    //ify jezeli jedna z nich lub obie sa puste, a jezeli nie sa to :
    while (r) {
        if (czy_wyst(l, r->val) && !czy_wyst(result, r->val)) {
            add(result, r->val);
            deletee(r, r->val);
        }
        r = r->next;
    }
    while (l) {
        if (czy_wyst(lr, l->val) && !czy_wyst(result, l->val)) {
            add(result, l->val);
            deletee(l, l->val);
        }

        l = l->next;
    }

}


int main() {
    node *liczby = nullptr;
    node *liczby2 = nullptr;
    add(liczby, 2);
    add(liczby, 4);

    add(liczby, 6);

    add(liczby, 377);
    add(liczby2, 12);

    add(liczby2, 16);

    add(liczby2, 17);

    add(liczby2, 27);

}