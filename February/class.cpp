#include <bits/stdc++.h>
using namespace std;

class Student
{
    int rollNo;
    char *name;

public:
    Student(int rollNo, char *studentName) : rollNo(rollNo), name(new char(strlen(studentName) + 1))
    {
        strcpy(this->name, studentName);
    }

    Student(const Student &s) : rollNo(s.rollNo), name(new char(strlen(s.name) + 1))
    {
        strcpy(this->name, s.name);
    }

    void print() const
    {
        cout << rollNo << " " << name << endl;
    }
};
int main()
{
    char name[] = "Pratik";
    Student s1(10, name);
    s1.print();

    name[0] = 'K';
    Student s2(20, name);
    s2.print();

    s1.print();

    return 0;
}