#include <bits/stdc++.h>
using namespace std;

#include "class.h"

int main()
{
    char *species = new char[strlen("Dog") + 1];
    strcpy(species, "Dog");

    char *houseHold = new char[strlen("Home") + 1];
    strcpy(houseHold, "Home");

    Animal *a = new Dog(5, 75, 175, species, houseHold);
    a->print();
    a->sound();

    species = new char[strlen("Cat") + 1];
    strcpy(species, "Cat");

    Animal *b = new Cat(3, 50, 150, species, houseHold);
    b->print();
    b->sound();

    delete a;
    delete b;
    delete species;
    return 0;
}