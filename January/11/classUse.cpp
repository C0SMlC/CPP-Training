#include <bits/stdc++.h>
using namespace std;
#include "class.h"
int main()
{
    char name[] = "Pratik";
    Person p(20, name);
    cout << p.getAge() << " " << p.getName();

    name[0] = 'K';
    Person p2(21, name);
    cout << p2.getAge() << " " << p2.getName();

    p2 = p;
    cout << p2.getAge() << " " << p2.getName();

    p2 = p + p2;
    cout << p2.getAge() << " " << p2.getName();
    
    return 0;
}