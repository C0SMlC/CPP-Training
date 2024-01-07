#include <bits/stdc++.h>
using namespace std;

#include "NameClass.h"
int main()
{
    char name[] = "Pratik";
    Student s1(name, 21, 38);
    s1.print();

    name[0] = 'K';
    Student s2(name, 30, 60);
    s2.print();
    cout << "xxxxxxxxxxxxxxxx" << endl;

    s1.print();
    s2.print();

    return 0;
}