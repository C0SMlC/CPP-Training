#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 8;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            if (row == 0 || col == 0 || row == size - 1 || col == size - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}