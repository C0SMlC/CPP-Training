#include <iostream>

using namespace std;

int add(int x, int y)
{
    return x + y;
}

double add(double x, double y)
{
    return x + y;
}

template <typename T>
T sub(T x, T y)
{
    return x + y;
}

template <>
int sub(int x, int y)
{
    cout << "specialised tempalte called" << endl;
    return x + y;
}

int main()
{
    // int (*xyz)(int, int);
    // xyz = add;
    // cout << xyz(5, 5) << endl;

    // double (*doubleMethod)(double, double);
    // doubleMethod = add;
    // cout << doubleMethod(5.0, 5.0) << endl;
    cout << sub(4, 6) << endl;
    cout << sub(4.45, 6.55) << endl;

    return 0;
}
