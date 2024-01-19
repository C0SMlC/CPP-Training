#include <iostream>
using namespace std;
class Animal
{

public:
    int height;
    int weight;

    Animal()
    {
        cout << "Animal created" << endl;
    }
    Animal(int height, int weight)
    {
        cout << "Animal created" << endl;

        this->height = height;
        this->weight = weight;
    }

    void print()
    {
        cout << "Height: " << Animal::height << endl;
        cout << "Weight: " << Animal::weight << endl;
    }

    virtual void sound() = 0;
};

class Dog : public Animal
{
public:
    Dog()
    {
        //cout << "Animal created" << endl;
    }
    Dog(int height, int weight) : Animal(height, weight) {
        cout << "Dog created" << endl;
    }
    void sound()
    {
        cout << "Bark" << endl;
    }

    void breed()
    {
        cout << this->weight + this->height << endl;
    }
};

class cat : public Animal
{
public:
    cat()
    {
        cout << "Animal created" << endl;
    }
    cat(int height, int weight) : Animal(height, weight) {}
    void sound()
    {
        cout << "Meow" << endl;
    }

    void breed()
    {
        cout << this->weight + this->height << endl;
    }
};

void sum(Animal *x)
{
    Dog *ptr = dynamic_cast<Dog *>(x);
    ptr->breed();
    cat *ptr2 = dynamic_cast<cat *>(x);
    ptr2->breed();
}

int main()
{
    Animal *ptr = new Dog(101, 100);
    sum(ptr);
}