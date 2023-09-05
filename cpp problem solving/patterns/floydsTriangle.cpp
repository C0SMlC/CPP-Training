#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 7;
    int num = 1;

    for (int row = 0; row < count; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }

    return 0;
}