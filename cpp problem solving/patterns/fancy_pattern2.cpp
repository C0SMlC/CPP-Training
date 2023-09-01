#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;

    for (int row = 0; row < n; row++)
    {
        int col;
        for (col = 0; col < row + 1; col++)
        {
            cout << col + 1;
        }

        for (col = col - 1; col > 0; col--)
        {
            cout << col;
        }

        cout << endl;
    }

    return 0;
}