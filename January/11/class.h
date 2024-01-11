#include <cstring>

class Person
{
    int age;
    char *name;

public:
    Person(int age, char *name)
    {
        this->age = age;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    Person(const Person &p)
    {
        age = p.age;
        name = new char[strlen(p.name) + 1];
        strcpy(name, p.name);
    }

    Person &operator=(const Person &p)
    {
        if (this != &p)
        {
            delete[] name;
            age = p.age;
            name = new char[strlen(p.name) + 1];
            strcpy(name, p.name);
        }
        return *this;
    }

    Person &operator+(const Person &p)
    {
        age = age + p.age;
        name = new char[strlen(name) + strlen(p.name) + 1];
        strcpy(name, name);
        strcat(name, p.name);
        return *this;
    }
    

    ~Person()
    {
        delete[] name;
    }

    int getAge() const
    {
        return age;
    }

    char *getName() const
    {
        return name;
    }
};