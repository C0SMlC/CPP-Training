#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;
    m.insert(make_pair(1, 10));
    m.insert(make_pair(2, 20));
    m.insert(make_pair(3, 30));
    m.insert(make_pair(4, 40));

    for (auto const &ele : m)
    {
        cout << ele.first << " " << ele.second << endl;
    }
    cout << endl;
}