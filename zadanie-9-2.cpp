//
// Created by Bartosz Kruczek on 11/12/2019.
//

#include <iostream>

using namespace std;

struct node {
    int index;
    int value;
    node *next;
};

void init(node *&tab) {
    tab = new node;

    tab->index = 0;
    tab->value = 0;
    tab->next = NULL;
}

int value(node *tab, int n) {
    if (!tab)
        return NULL;

    node *p = tab;

    while (p) {
        if (p->index == n)
            return p->value;

        p = p->next;
    }

    return NULL;
}

void set(node *&tab, int n, int value) {
    if (!tab)
        return;

    node *p = tab, *last;

    while (p) {
        if (p->index == n) {
            p->value = value;
            return;
        }

        last = p;
        p = p->next;
    }

    for (int i = last->index + 1; i <= n; i++) {
        node *n = new node;

        n->index = i;
        n->value = 0;
        n->next = NULL;

        last->next = n;
        last = n;
    }

    last->value = value;
}

void list(node *&tab) {
    node *p = tab;

    if (!p) {
        cout << "Lista jest pusta!" << endl;
        return;
    }

    while (p) {
        cout << "[" << p->index << "]: " << p->value << endl;
        p = p->next;
    }
}

int main() {
    node *tab;

    init(tab);
    set(tab, 5, 10);
    set(tab, 2, 50);
    set(tab, 5, 20);
    set(tab, 20, 1);

    cout << value(tab, 2) << endl;

    list(tab);
}
