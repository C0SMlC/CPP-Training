#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    if (n < 10 && n >= 0)
    {
        return n;
    }

    int sign = 1;
    if (n < 0)
    {
        sign = -1;
        n = -n;
    }

    int reversed = 0;
    while (n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return reversed * sign;
}

int main()
{
    int n;
    cin >> n;
    cout << n << endl;
    cout << reverse(n);
    return 0;
}