#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Day-1
    int i = 10;
    cout << "The address of i is " << &i << endl;
    cout << "The content of i is " << i << endl;

    int *p = &i;
    cout << "The address of p is " << &p << endl;
    cout << "The address stored in p is " << p << endl;
    cout << "The content of p is " << *p << endl;

    float j = 20.32;
    double k = 1065.2365;
    char l = 'a';

    cout << "The size of int is " << sizeof(i) << endl;
    cout << "The size of float is " << sizeof(j) << endl;
    cout << "The size of double is " << sizeof(k) << endl;
    cout << "The size of char is " << sizeof(l) << endl;

    return 0;
}