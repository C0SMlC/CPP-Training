#include <bits/stdc++.h>

class Student
{
    int age;
    char *name;
    const int rollNumber;
    static int totalStudents;

    // Initialization function
    void initialize(int age, const char *name)
    {
        this->age = age;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

public:
    // Constructor
    Student(int age, const char *name, int r) : rollNumber(r)
    {
        initialize(age, name);
        totalStudents++;
    }

    // Copy Constructor
    Student(const Student &s) : rollNumber(s.rollNumber)
    {
        initialize(s.age, s.name);
    }

    ~Student()
    {
        delete[] name;
    }

    void print() const
    {
        std::cout << age << " " << name << " " << rollNumber << std::endl;
    }

    static int getTotalStudents()
    {
        return totalStudents;
    }
};

int Student::totalStudents = 0;