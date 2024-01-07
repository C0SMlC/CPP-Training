#include <bits/stdc++.h>
using namespace std;

#include "class.cpp"
int main()
{

    
    char name[] = "Pratik";
    Person p1(20, name);
    p1.print();

    name[0] = 'K';
    Person p2(21, name);
    p2.print();
    p1.print();
    return 0;
}
