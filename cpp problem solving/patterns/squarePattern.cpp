#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // solid sphere
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            cout << '*';
        }
        cout << endl;
    }

    // Hollow sphere
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if (i == 0 || i == n - 1 || k == 0 || k == n - 1)
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
    return 0;
}