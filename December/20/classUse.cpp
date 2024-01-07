#include <bits/stdc++.h>
using namespace std;
#include "class.cpp"

int main()
{
    Number c1(10, 20);
    Number c2 = c1++;
    c1.print();
    c2.print();

    Number c3 = ++c1;
    c1.print();
    c3.print();

    Number c4 = c3;
    c4.print();

    cout << "Person Class" << endl;

    char name[] = "Pratik";
    Person p1(name, 21, 2002);
    p1.print();

    name[0] = 'K';
    Person p2(name, 22, 2002);
    p2.print();

    p1.print();
    p2.print();

    cout << "Inheritance" << endl;
    Student s1(name, 21, 2002, 59941645);
    name[0] = 'P';
    Student s2(name, 21, 2002, 89941645);

    s2.print();
    s1.print();

    Person *p7 = new Student(name, 21, 2002, 9898989);
    p7->print();
    delete p7;

    cout << sizeof(Person) << endl;

    cout << "xxxxxxxxxxxxxx" << endl;

    //  scope resolution operator
    Person::printTotal();

    // Patient class
    cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;

    // Deep Copy
    char patientName[] = "Pratik";

    PatientDeepCopy patient1(patientName, 25, 876534);
    PatientDeepCopy patient2(patient1);

    patient1.name[0] = 'K';
    patient1.display();
    patient2.display();

    // Shallow Copy
    char newPatientName[] = "jay";

    PatientShallowCopy patient3(newPatientName, 25, 876534);
    PatientShallowCopy patient4(patient3);

    patient3.name[0] = 'K';
    patient3.display();
    patient4.display();

    return 0;
}