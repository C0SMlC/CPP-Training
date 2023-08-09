#include <bits/stdc++.h>
using namespace std;

class Student
{
    char *studentName;
    const int rollNo;

public:
    static int totalStudentCount;

public:
    Student(char *studentName, int studentRollNo) : rollNo(studentRollNo)
    {
        this->studentName = new char[strlen(studentName) + 1];
        strcpy(this->studentName, studentName);
        totalStudentCount++;
    }

    void display()
    {
        cout << studentName << endl;
        cout << rollNo << endl;
    }
};

int Student ::totalStudentCount = 0;

class Human : public Student
{
    int num;

public:
    Human()
    {
    }

    Human(int num)
    {
        this->num = num;
    }
};

int main()
{
    // char name[] = "Pratik";
    // Student s1(name, 1);
    // s1.display();

    // name[0] = 'A';
    // Student s2(name, 2);
    // s2.display();

    // s1.display();

    // cout << Student::totalStudentCount << endl;

    Human h1(10);
    h1.display();
    return 0;
}
