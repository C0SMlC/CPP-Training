#include <bits/stdc++.h>
using namespace std;

int multiplication(int num1, int num2)
{
    if (num1 == 0 || num2 == 0)
    {
        return 0;
    }
    cout << "hi" << endl;
    return num1 + multiplication(num1, num2 - 1);
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << multiplication(num1, num2) << endl;
    return 0;
}