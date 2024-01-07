#include <bits/stdc++.h>
using namespace std;

#include "class.cpp"

int main()
{
    Fraction f1(10, 20);
    Fraction f2;
    f2 = f1;

    f1.print();
    f2.print();

    return 0;
}