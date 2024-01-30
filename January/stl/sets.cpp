#include <bits/stdc++.h>
using namespace std;

class myClass
{
public:
    int identifier;
    string name;

    myClass(int identifier, string name)
    {
        this->identifier = identifier;
        this->name = name;
    }

    bool operator<(const myClass &other) const
    {
        return identifier < other.identifier && name < other.name;
    }
};

int main()
{
    set<myClass> s;
    s.insert(myClass(1, "Pra"));
    // s.insert(myClass(2, "par"));

    // wont have any effect, that why multiset was introduced
    s.insert(myClass(3, "bc"));

    // set<myClass>::iterator it = s.begin();
    // cout << it->identifier << endl;

    for (auto it : s)
    {
        cout << it.identifier << " " << it.name << endl;
    }

    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(1);

    // for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    return 0;
}
