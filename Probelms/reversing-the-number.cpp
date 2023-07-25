#include <bits/stdc++.h>
using namespace std;

int reverseNum(int num)
{
    // 96
    int reversed = 0;
    while (num > 0)
    {
        int lastDigit = num % 10; // 6
        reversed = reversed * 10 + lastDigit;
        num = num / 10; // 9
    }
    return reversed;
}
int main()
{
    int num;
    cin >> num;
    cout << reverseNum(num) << endl;
    return 0;
}