#include <bits/stdc++.h>
using namespace std;

#include "student.cpp"

int main()
{
    char name[] = "Pratik";
    Student s1(20, name, 45);
    name[0] = 'a';
    Student s2(20, name, 50);
    s2.print();

    s1.print();

    cout << Student ::getTotalStudents();
    return 0;
}