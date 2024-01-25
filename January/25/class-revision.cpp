#include <bits/stdc++.h>
using namespace std;

class Person
{
    int age;
    char *name;

public:
    // Deep copy
    Person(int age, char *name) : age(age)
    {
        this->name = new char(strlen(name) + 1);
        strcpy(this->name, name);
    }

    void print()
    {
        cout << this->name << endl;
    }
};

// Polymorphism

class Animal
{
    int weight;
    int height;
    char *species;

public:
    Animal(int weight, int height, const char *species)
        : weight(weight), height(height), species(new char[strlen(species) + 1])
    {
        strcpy(this->species, species);
        cout << "Constructor called for Animal" << endl;
    }

    friend void friendFunction(Animal &d1);
    virtual void print() = 0;
    virtual ~Animal()
    {
        delete[] species;
        cout << "Destructor is called" << endl;
    }
};

class Dog : public Animal
{
public:
    Dog(int weight, int height, const char *species)
        : Animal(weight, height, species)
    {
        cout << "Constructor called for Dog" << endl;
    }

    void print() override
    {
        cout << "Dog is called" << endl;
    }

    ~Dog()
    {
        cout << "Destructor called for the DOG" << endl;
    }
};

void friendFunction(Animal &d1)
{
    cout << "Friend Function - Weight: " << d1.weight << ", Height: " << d1.height << ", Species: " << d1.species << endl;
}

// casting and runtime polymorphism
class Object
{
    int height;
    int width;
    char *name;

public:
    Object(int height, int width, char *name) : height(height), width(width), name(new char(strlen(name) + 1))
    {
        strcpy(this->name, name);
        cout << "Base constructor is called" << endl;
    }

    virtual void print()
    {
        cout << "This is the base print" << endl;
    }
};

class gymEquipment : public Object
{
public:
    gymEquipment(int height, int width, char *name) : Object(height, width, name)
    {
        cout << "Gym Eqipment constructor is called" << endl;
    }

    void print()
    {
        cout << "This is the Gym Eqipment print" << endl;
    }

    void specificFunction()

    {
        cout << "Specific child function" << endl;
    }
};

int main()
{
    // char name[] = "PRatik";
    // Person p1(10, name);
    // name[0] = 'R';
    // Person p2(10, name);

    // p1.print();
    // p2.print();

    // char species[] = "Dog";
    // Dog a(60, 192, species);
    // friendFunction(a);
    // a.print();

    char name[] = "Dumbell";
    gymEquipment g1(10, 10, name);
    g1.print();

    Object o1 = g1;
    o1.print();

    gymEquipment g2(10, 10, name);
    Object *o2 = &g2;

    o2->print();

    gymEquipment *g3 = dynamic_cast<gymEquipment *>(o2);
    g3->print();

    return 0;
}