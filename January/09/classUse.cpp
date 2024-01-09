#include <bits/stdc++.h>
using namespace std;

#include "class.h"
int main()
{
    char name[] = "Pratik";
    Student s1(20, 2000, name);
    Student s2;
    s2 = s1;
    s1.print();
    s2.print();
    return 0;
}