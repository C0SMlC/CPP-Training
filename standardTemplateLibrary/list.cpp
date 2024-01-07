#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(0);

    auto it = l.begin();
    *it = 10;

    advance(it, 3);
    l.erase(it);

    // print
    for (auto const element : l)
    {
        cout << element << " ";
    }
    return 0;
}