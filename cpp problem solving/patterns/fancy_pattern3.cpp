#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 5;
    for (int row = 0; row < count; row++)
    {
        cout << '*';

        int col;
        for (col = 0; col < row; col++)
        {
            cout << col + 1;
        }

        for (col; col > 1; col--)
        {
            cout << col - 1;
        }

        if (row != 0)
            cout << "*";
        cout << endl;
    }

    for (int row = count; row > 0; row--)
    {
        cout << '*';

        int col;
        for (col = 0; col < row; col++)
        {
            cout << col + 1;
        }

        for (col; col > 1; col--)
        {
            cout << col - 1;
        }

        if (row != 0)
            cout << "*";
        cout << endl;
    }

    return 0;
}