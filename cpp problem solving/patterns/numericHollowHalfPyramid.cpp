#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 6;
    for (int row = 0; row < count; row++)
    {
        for (int col = 0; col < count; col++)
        {
            if (col == 0)
                cout << 1;
            else if (row == count - 1)
                cout << col + 1;
            else if (row == col && row != count - 1)
                cout << row + 1;
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}