#include <bits/stdc++.h>
using namespace std;

class myClass
{
    int identifier;
    string name;

public:
    myClass() : identifier(0), name("") {}

    myClass(int identifier, string name)
    {
        this->identifier = identifier;
        this->name = name;
    }

    friend ostream &operator<<(ostream &os, const myClass &other)
    {
        os << other.identifier << " " << other.name << endl;
    }
};

int main()
{
    map<int, myClass> m;
    m[1] = myClass(1, "Pratik");
    m[2] = myClass(2, "John");

    for (const auto &pair : m)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    for (map<int, myClass>::iterator it = m.begin(); it != m.end(); ++it)
    {
        cout << it->first << it->second << endl;
    }

    return 0;
}
