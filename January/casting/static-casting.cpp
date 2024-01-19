#include <bits/stdc++.h>
using namespace std;

enum class Month
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};
int main()
{
    char num = 'A';
    int x = static_cast<int>(num);
    cout << x << endl;

    char num1 = '5';
    int y = static_cast<int>(num1);
    cout << y << endl;

    Month n = Month ::DEC;
    cout << static_cast<int>(n) << endl;
    int m = static_cast<int>(Month::JAN);
    cout << m << endl;

    double d = 10.5;
    int z = static_cast<int>(d);
    cout << z << endl;
    return 0;
}