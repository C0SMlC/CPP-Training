#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 6;
    for (int row = 0; row < count; row++)
    {
        int col;
        for (col = 0; col < row + 1; col++)
        {
            cout << '*';
        }

        for (int spaceCol = 0; spaceCol < 2 * (count - row) - 2; spaceCol++)
        {
            cout << " ";
        }

        for (col; col >= 1; col--)
        {
            cout << '*';
        }

        cout << endl;
    }

    for (int row = count - 1; row >= 0; row--)
    {
        int col;
        for (col = 0; col < row + 1; col++)
        {
            cout << '*';
        }

        for (int spaceCol = 0; spaceCol < 2 * (count - row) - 2; spaceCol++)
        {
            cout << " ";
        }

        for (col; col >= 1; col--)
        {
            cout << '*';
        }

        cout << endl;
    }
    return 0;
}