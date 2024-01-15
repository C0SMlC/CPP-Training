#include <bits/stdc++.h>
using namespace std;
#include "class.cpp"
int main()
{
    char *species = "Cat";
    Animal *a = new Dog(species, 5);
    a->print();

    species = "Dog";
    Animal *b = new Cat(species, 3);
    b->print();

    // cannot intialise animal like this
    // Animal *c = new Animal("Cat", 5);

    a->sound();
    b->sound();

    delete a;
    delete b;

    cout << "Total animals: " << Animal::totalAnimals << endl;

    return 0;
}