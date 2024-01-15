class Animal
{
    int age;
    int weight;
    int height;
    char *species;
    static int totalAnimals;

public:
    Animal(){};
    Animal(int age, int weight, int height, char *species)
    {
        this->age = age;
        this->weight = weight;
        this->height = height;
        this->species = new char(strlen(species) + 1);
        strcpy(this->species, species);
        totalAnimals++;
    }

    Animal &operator=(const Animal &a)
    {
        if (this != &a)
        {
            delete[] species;

            age = a.age;
            weight = a.weight;
            height = a.height;
            species = new char[strlen(a.species) + 1];
            strcpy(species, a.species);
            // Note: totalAnimals should not be incremented here
        }
        return *this;
    }

    virtual void print()
    {
        cout << "Age: " << this->age << endl;
        cout << "Weight: " << this->weight << endl;
        cout << "Height: " << this->height << endl;
        cout << "Species: " << this->species << endl;
    }

    virtual void sound() = 0;

    virtual ~Animal()
    {
        cout << "Animal destroyed" << endl;
        delete[] this->species;
        totalAnimals--;
    }
};

int Animal::totalAnimals = 0;

class Dog : public Animal
{
    char *houseHold;

public:
    Dog(int age, int weight, int height, char *species, char *houseHold) : Animal(age, weight, height, species)
    {
        this->houseHold = new char[strlen(houseHold) + 1];
        strcpy(this->houseHold, houseHold);
    }

    Dog(){};

    Dog &operator=(const Dog &d)
    {
        if (this != &d)
        {
            Animal::operator=(d);
            delete[] houseHold;
            houseHold = new char[strlen(d.houseHold) + 1];
            strcpy(houseHold, d.houseHold);
        }
        return *this;
    }

    void sound()
    {
        cout << "Bark" << endl;
    }

    void print()
    {
        Animal::print();
        cout << "HouseHold: " << this->houseHold << endl;
    }

    ~Dog()
    {
        delete[] houseHold;
        cout << "Dog destroyed" << endl;
    }
};

class Cat : public Animal
{
    char *houseHold;

public:
    Cat(int age, int weight, int height, char *species, char *houseHold) : Animal(age, weight, height, species)
    {
        this->houseHold = new char(strlen(houseHold) + 1);
        strcpy(this->houseHold, houseHold);
    }

    Cat &operator=(const Cat &c)
    {
        if (this != &c)
        {
            Animal::operator=(c);
            delete[] houseHold;
            houseHold = new char[strlen(c.houseHold) + 1];
            strcpy(houseHold, c.houseHold);
        }
        return *this;
    }
    void sound()
    {
        cout << "Meow Meow" << endl;
    }

    void print()
    {
        Animal::print();
        cout << "HouseHold: " << this->houseHold << endl;
    }

    ~Cat()
    {
        delete[] houseHold;
        cout << "Cat destroyed" << endl;
    }
};

class Bird : public Animal
{

public:
    Bird(int age, int weight, int height, char *species) : Animal(age, weight, height, species){};
    void sound()
    {
        cout << "Chirp Chirp" << endl;
    }
    void print()
    {
        Animal::print();
    }
    ~Bird()
    {
        cout << "Bird destroyed" << endl;
    }
};