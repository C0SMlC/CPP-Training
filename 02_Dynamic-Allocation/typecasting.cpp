#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p = 65;

    // implicit typecasting
    char c = p;

    cout << p << endl;
    cout << c << endl;

    int *i = &p;
    cout << i << endl;

    // cant do this because this doesnt make sense
    // char *pc = i;
    // Explicit typecasting
    char *pc = (char *)i;
    cout << *pc << endl;
    cout << pc << endl;

    return 0;
}