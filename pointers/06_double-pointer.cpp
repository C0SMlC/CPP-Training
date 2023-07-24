#include <bits/stdc++.h>
using namespace std;

void increment(int **p)
{
    p = p + 1;
}
void increment1(int **p)
{
    *p = *p + 1;
}
void increment2(int **p)
{
    **p = **p + 1;
}

int main()
{
    int p = 100;
    int *q = &p;
    int **r = &q;

    // cout << q << endl;
    // cout << *q << endl;
    cout << r << endl;
    cout << *r << endl;
    cout << **r << endl;

    // increment(r);
    // cout << r << endl;
    // cout << *r << endl;
    // cout << **r << endl;
    // increment1(r);
    // cout << r << endl;
    // cout << *r << endl;
    // cout << **r << endl;
    increment2(r);
    cout << r << endl;
    cout << *r << endl;
    cout << **r << endl;
    return 0;
}