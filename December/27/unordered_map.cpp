#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, int> m;
    m[1] = 10;
    m[2] = 20;
    m[3] = 30;
    m[4] = 40;

    // Print the map
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    m.erase(3);

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}