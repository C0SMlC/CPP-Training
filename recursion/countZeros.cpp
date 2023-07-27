#include <bits/stdc++.h>
using namespace std;

int countZeros(int num)
{
    if (num == 0)
        return 1;
    if (num < 10 and num != 0)
        return 0;

    int lastDigit = num % 10;
    int remainingNumber = num / 10;

    int zerosInRemaining = countZeros(remainingNumber);
    return zerosInRemaining + (lastDigit == 0);
}
int main()
{
    int num;
    cin >> num;
    cout << "The number of zeros are : " << countZeros(num);
    return 0;
}