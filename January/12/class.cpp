class Animal
{
    char *species;
    int age;

public:
    static int totalAnimals;

    Animal(char *species, int age)
    {
        this->species = new char[strlen(species) + 1];
        strcpy(this->species, species);
        this->age = age;
        totalAnimals++;
    }

    virtual void sound() = 0;

    void print()
    {
        cout << "Species: " << this->species << endl;
        cout << "Age: " << this->age << endl;
        cout << "Total animals: " << totalAnimals << endl;
    }

    virtual ~Animal()
    {
        cout << "Animal destroyed" << endl;
        delete[] this->species;
        totalAnimals--;
    }
};

Animal ::~Animal();

// intialise totalAnimals
int Animal::totalAnimals = 0;

class Dog : public Animal
{
public:
    Dog(char *species, int age) : Animal(species, age) {}
    void sound()
    {
        cout << "Bark" << endl;
    }

    ~Dog()
    {
        cout << "Dog destroyed" << endl;
    }
};

class Cat : public Animal
{
public:
    Cat(char *species, int age) : Animal(species, age) {}
    void sound()
    {
        cout << "Meow" << endl;
    }

    ~Cat()
    {
        cout << "Cat destroyed" << endl;
    }
};
