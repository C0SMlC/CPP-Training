#include <bits/stdc++.h>
using namespace std;

class base
{
    virtual void foo()
    {
    }
};

class derv : public base
{

    void foo()
    {
        cout << "hello";
    }
};

int main()
{
    vector<int> myList = {1, 2, 3, 4, 5};
    set<int> s;

    for (auto const &element : myList)
    {
        s.insert(element);
    }

    for (auto const &element : s)
    {
        cout << element << " ";
    }

    double var = 3.14;

    map<int, int> m;
    m.insert({1, 10});
    m.insert({2, 20});
    m.insert({3, 30});

    for (auto const &element : m)
    {
        cout << element.first << " " << element.second << endl;
    }

    pair<int, int> p = {1, 2};

    cout << "Dynamic cast" << endl;

    base *b = new derv();

    derv *newderv = dynamic_cast<derv *>(b);

    // dynamic arrays
    int *arr = new int[10];
    int **arrr = new int *[10];

    // dynamic casting

    base *b = new derv();

    derv *d = dynamic_cast<derv *>(b);

    return 0;
}
