#include <bits/stdc++.h>
using namespace std;
// demonstrate copy conmstructor

class Student
{
    int age;
    char *name;

public:
    Student(int age, char *name)
    {
        this->age = age;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    void print()
    {
        cout << "My name is " << this->name << " and age is " << this->age << endl;
    }

    ~Student()
    {
        delete[] name;
    }
};
int main()
{
    char name[] = "Pratik";
    Student s1(18, name);
    s1.print();

    return 0;
}