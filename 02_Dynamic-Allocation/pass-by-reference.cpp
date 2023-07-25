#include <bits/stdc++.h>
using namespace std;

// will change the value as we are passing by reference
int increment(int &j)
{
    return j++;
}

int main()
{
    int i = 10;
    increment(i);
    cout << i << endl;
    return 0;
}