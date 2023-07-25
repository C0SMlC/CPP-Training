#include <bits/stdc++.h>
using namespace std;
int main()
{
    int **rows = new int *[3];

    for (int i = 0; i < 3; i++)
    {
        rows[i] = new int[3];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            rows[i][j] = i;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << rows[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        delete[] rows[i];
    }

    delete[] rows;
    return 0;
}