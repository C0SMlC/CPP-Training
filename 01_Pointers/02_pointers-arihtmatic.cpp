#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 100;
    int *p = &a;
    cout << p << endl;
    // this will point to the next address that is if intially address is 0xd6909ff89c
    // p+1 will give the next address which in case of integer is 0xd6909ff89c + 4 = 0xd6909ff8a0
    cout << p + 1 << endl;

    double b = 4064.465;
    double *c = &b;
    cout << c << endl;
    cout << c + 1 << endl;

    return 0;
}