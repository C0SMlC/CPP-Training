#include <bits/stdc++.h>
using namespace std;

int sumOfDigit(int num)
{
    if (num < 10)
        return num;
    return (num % 10) + sumOfDigit(num / 10);
}
int main()
{
    int num;
    cin >> num;
    cout << "The sum of digits is " << sumOfDigit(num) << endl;
    return 0;
}