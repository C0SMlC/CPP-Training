#include <bits/stdc++.h>
using namespace std;

template <class T>
T Sum(T x, T y)
{
    return x + y;
}

template <class T>
T Sub(T x, T y)
{
    return x - y;
}

template <class T>
T Mul(T x, T y)
{
    return x * y;
}
int main()
{
    // Int data
    cout << Sum(2, 3) << endl;
    cout << Sub(2, 3) << endl;
    cout << Mul(2, 3) << endl;

    // Float data
    cout << Sum(2.12, 3.21) << endl;
    cout << Sub(2.12, 3.21) << endl;
    cout << Mul(2.12, 3.21) << endl;

    // String data
    cout << Sum(string("hii"), string("Pratik")) << endl;

    return 0;
}