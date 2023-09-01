#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 6;

    for (int row = 0; row < count; row++)
    {
        for (int col = 0; col < count - row - 1; col++)
        {
            cout << " ";
        }

        int col;
        for (col = 0; col < row + 1; col++)
        {
            cout << col + 1;
        }

        for (col; col > 1; col--)
        {
            cout << col - 1;
        }

        cout << endl;
    }

    return 0;
}