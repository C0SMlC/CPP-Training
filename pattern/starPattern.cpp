#include <bits/stdc++.h>
using namespace std;
int main()
{

    int num = 5;

    // *
    // **
    // ***
    // ****
    // *****
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "*"
    //              << " ";
    //     }
    //     cout << endl;
    // }

    // *****
    // ****
    // ***
    // **
    // *

    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = num; j > i; j--)
    //     {
    //         cout << "*"
    //              << " ";
    //     }
    //     cout << endl;
    // }

    //     *
    //    **
    //   ***
    //  ****
    // *****

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }



    return 0;
}