#include <bits/stdc++.h>
using namespace std;

// Generic
template <class T>
T Square(T x)
{
    return x * x;
}

// Specialised
template <>
int Square(int x)
{
    return x * x + 4;
}
int main()
{
    cout << Square(5) << endl;
    cout << Square(5.5) << endl;
    cout << Square(5 + 4.5) << endl;
    
    return 0;
}