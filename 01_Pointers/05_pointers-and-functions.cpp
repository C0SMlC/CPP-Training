#include <bits/stdc++.h>
using namespace std;

int sum(int *num, int size)
{
    int addition = 0;
    for (int i = 0; i < size; i++)
    {
        addition = addition + num[i];
    }
    return addition;
}

int *sum(int *num)
{
    return (num + 1);
}

int increment(int *num)
{
    // equivalent to writing *num = (*num) + 1
    return (*num)++;
}

int main()
{
    int array[] = {10, 20, 30, 40, 50};
    // cout << sum(array, 5);

    // pass by value
    int p = 100;
    int *q = &p;
    cout << q << endl;
    cout << sum(q);

    cout << p << endl;
    cout << increment(q) << endl;
    cout << p << endl;

    return 0;
}