#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=10;

    // Hollow inverted half pyramid
    // ******
    // *   *
    // *  *
    // * *
    // **
    // *
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || j == (n - i - 1))
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }

    // Hollow inverted half pyramid

    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < ((2 * n) - 1); j++)
        {
            if (j < (n - i - 1))
            {
                cout << ' ';
            }
            else if (k < (2 * i + 1))
            {
                cout << '*';
                k++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < ((2 * n) - 1); j++)
        {
            if (j < (n - i - 1))
            {
                cout << ' ';
            }
            else if (n - 1 - i == j || n - 1 + i == j || i == n - 1)
            {
                cout << '*';
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }

        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}