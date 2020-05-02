#include <iostream>

using namespace std;

struct node {
    int value;
    node *next;
};

bool contains(node *first, int element) {
    node *p = first;

    while (p) {
        if (p->value == element)
            return true;

        p = p->next;
    }

    return false;
}


node *add(node *&first, int element) {
    node *p = first;

    node *n = new node;
    n->value = element;
    n->next = NULL;

    if (!p) {
        first = n;
    } else {
        node *last=new node;

        while (p) {
            last = p;
            p = p->next;
        }

        last->next = n;
    }

    return n;
}

node *remove(node *&first, unsigned int element) {
    node *p = first;

    node *r, *last;
    last = first;

    if (!p) {
        r = NULL;
    } else {
        while (p) {
            if (p->value == element) {
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

void list(node *&first) {
    node *p = first;

    if (!p) {
        cout << "Lista jest pusta!" << endl;
        return;
    }

    int counter = 0;

    while (p) {
        cout << "[" << counter++ << "]: " << p->value << endl;
        p = p->next;
    }
}/*
 looool
 */

int main() {
    node *numbers = NULL;

    add(numbers, 1  );
    add(numbers, 2);

    remove(numbers, 2);
    //remove(numbers, 1);

    add(numbers, 5);
    list(numbers);

    if (contains(numbers, 5))
        cout << "jest";

    return 0;
}
