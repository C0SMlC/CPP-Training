#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, vector<int>> mp;

    mp[0] = {1, 2, 3, 4};
    mp[1].push_back(1);
    mp[1].push_back(2);
    mp[1].push_back(3);

    mp.erase(1);

    // print
    for (auto const &element : mp)
    {
        cout << element.first << " ";
        for (auto const &element1 : element.second)
        {
            cout << element1 << " ";
        }
        cout << endl;
    }
    return 0;
}