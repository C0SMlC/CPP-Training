#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 5};
    for (auto const &i : v)
    {
        cout << i << endl;
    }

    cout << "REverse" << endl;
    for (auto it = v.rbegin(); it != v.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // vector<int>::iterator it = v.begin();

    auto it = v.begin();
    advance(it, 3);
    v.erase(it);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    v.shrink_to_fit();

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    return 0;
}