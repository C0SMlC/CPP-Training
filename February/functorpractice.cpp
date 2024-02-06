#include <bits/stdc++.h>
using namespace std;

class addFunction
{
public:
    int operator()(int x, int y)
    {
        return x + y;
    }
};

class Number
{
    int num;

public:
    Number(int x) : num(x) {}

    bool operator<(const Number &n) const
    {
        return this->num < n.num;
    }

    int getNum() const
    {
        return this->num;
    }
};

void printNumber(const Number &n)
{
    cout << n.getNum() << endl;
}

int main()
{
    // addFunction add;
    // int result = add(3, 4);
    // cout << "Result: " << result << std::endl;

    set<Number> s;
    s.insert(Number(10));
    s.insert(Number(20));
    s.insert(Number(30));
    s.insert(Number(40));

    for_each(s.begin(), s.end(), printNumber);
}