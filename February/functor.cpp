#include <bits/stdc++.h>
using namespace std;

class AddFunctor
{
public:
    int operator()(int x, int y) const
    {
        return x + y;
    }
};

class SubFunctor
{
public:
    int operator()(int x, int y) const
    {
        return x - y;
    }
};

int addFunction(int x, int y)
{
    return x + y;
}

int main()
{
    AddFunctor add;
    SubFunctor sub;
    int result = add(3, 4);
    cout << "Result: " << result << std::endl;

    result = sub(3, 4);
    cout << "Result: " << result << std::endl;

    int (*method)(int, int);
    method = addFunction;
    cout << "POinter result : " << method(14, 14);
    return 0;
}
