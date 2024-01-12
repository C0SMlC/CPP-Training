#include <bits/stdc++.h>
using namespace std;

class Student
{
    int age;
    char *name;

public:
    Student(int age, char *name)
    {
        this->age = age;
        this->name = new char(strlen(name) + 1);
        strcpy(this->name, name);
    }

    void print()
    {
        cout << "My name is " << this->name << " and age is " << this->age << endl;
    }
};
int main()
{
    char name[] = "PRatik";
    Student s1(18, name);
    s1.print();

    name[0] = 'K';
    Student s2(30, name);
    s2.print();
    s1.print();

    return 0;
}