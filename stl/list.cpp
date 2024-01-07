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

    // removing element at index 3
    auto it = l.begin();
    auto it1 = l.
    advance(it, 3);
    l.erase(it);

    for (auto const &element : l)
    {
        cout << element << " ";
    }
    cout << endl;

    list<int> l1;

    auto it1 = l1.begin();

    for (int i = 0; i < 5; i++)
    {
        l1.insert(it1, i);
    }

    for (auto const &element : l1)
    {
        cout << element << " ";
    }
    cout << endl;
    it1 = l1.begin();
    advance(it1, 1);

    *it1 = 10;

    for (auto const &element : l1)
    {
        cout << element << " ";
    }

    cout << endl;

    return 0;
}