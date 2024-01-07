#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l = {1, 2, 3, 4, 5};

    // Print LL
    for (auto const element : l)
    {
        cout << element << " ";
    }
    cout << endl;

    // Erase element at index 2
    auto it = l.begin();
    advance(it, 2);

    l.erase(it);

    // Print LL
    for (auto const element : l)
    {
        cout << element << " ";
    }
    cout << endl;

    // get front and back
    auto front = l.front();
    auto back = l.back();
    cout << front << " " << back << endl;
}