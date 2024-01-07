#include <bits/stdc++.h>
using namespace std;

#include "class.h"

int main()
{
    complexNumber c1(1, 2);
    c1.print();

    complexNumber c2(1, 2);
    c2.print();

    complexNumber c3 = c1 + c2;
    c3.print();

    complexNumber c4 = ++(++(c3));
    c4.print();
    c3.print();

    complexNumber c5 = c3++;
    c5.print();
    c3.print();

    complexNumber c6(c5);
    c6.print();

    char name[] = "Pratik";
    Person p1(2001, name);
    p1.print();

    name[0] = 'K';
    Person p2(2002, name);
    p2.print();
    p1.print();

    child c541(10);

    return 0;
}