#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 6;
    for (int row = 0; row < count; row++)
    {
        for (int col = 0; col < count; col++)
        {
            if (row == 0 || col == 0 || row + col == count - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}