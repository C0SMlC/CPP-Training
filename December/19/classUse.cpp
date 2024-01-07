#include <bits/stdc++.h>
using namespace std;

#include "class.h"
int main()
{
    ComplexNumber c1(10, 20);
    ComplexNumber c2(30, 40);
    ComplexNumber c3(50, 60);

    ComplexNumber c4 = (c1 + c2) + c3;

    c4.print();

    return 0;
}