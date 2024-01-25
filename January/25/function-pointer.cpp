#include <bits/stdc++.h>
using namespace std;

void print(int num)
{
    cout << "The number is " << num << endl;
}

int main()
{
    void (*printf)(int);
    printf = print;

    printf(20);
    return 0;
}