#include <iostream>
#include <cstring>

class Student
{
private:
    int age;
    const int birthYear;
    char *name;

public:
    // Constructor

    Student() : birthYear(2002)
    {
        cout << "Default constructor called" << endl;
    }
    Student(int age, int birthYear, const char *name) : birthYear(birthYear), age(age), name(new char[strlen(name) + 1])
    {
        strcpy(this->name, name);
    }

    // Copy constructor
    Student(const Student &obj) : birthYear(obj.birthYear), age(obj.age), name(new char[strlen(obj.name) + 1])
    {
        cout << "Copy constructor called" << endl;
        strcpy(this->name, obj.name);
    }

    // Assignment operator
    Student &operator=(const Student &obj)
    {
        cout << "Assignment operator called" << endl;
        if (this != &obj)
        {
            age = obj.age;
            delete[] name;
            name = new char[strlen(obj.name) + 1];
            strcpy(name, obj.name);
        }
        return *this;
    }

    // Destructor
    ~Student()
    {
        delete[] name; // Release dynamically allocated memory
    }

    void print() const
    {
        std::cout << "My name is " << name << " and age is " << age << " " << birthYear << std::endl;
    }
};
