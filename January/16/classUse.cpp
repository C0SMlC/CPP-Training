#include <bits/stdc++.h>
using namespace std;

#include "class.h"

int main()
{
    Animal *ptra = new Animal();

    Animal *str;

    cout << ptra->age << *((*ptra).ptr) << endl;
    cout << str.age << *(str.ptr) << endl;

    delete ptra;
    return 0;
}