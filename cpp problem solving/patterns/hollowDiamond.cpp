#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;
    // cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }

        for (int col = 0; col < 2 * row + 1; col++)
        {
            // cout << "*";
            if (col == 0 or col == 2 * row)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
    for (int row = n; row > 0; row--)
    {
        for (int col = 0; col < n-row; col++)
        {
            cout << " ";
        }

        for (int col = 0; col < 2 * row - 1; col++)
        {
            // cout << "*";
            if (col == 0 or col == 2 * row-2)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}