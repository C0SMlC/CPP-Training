#include <bits/stdc++.h>
using namespace std;

// generic class
template <typename T>
class MyClass
{
public:
    T x, y;
    MyClass(T a, T b)
    {
        x = a;
        y = b;
        cout << "Generic class" << endl;
    }
    T sum()
    {
        return x + y;
    }
};

// specialization
template <>
class MyClass<int>
{
public:
    int x, y;
    MyClass(int a, int b)
    {
        x = a;
        y = b;
        cout << "Specialized class" << endl;
    }
    int sum()
    {
        return x + y;
    }
};

int main()
{
    MyClass<float> obj(2.5, 3.5);
    cout << obj.sum() << endl;

    MyClass<int> obj2(2, 3);
    cout << obj2.sum() << endl;

    return 0;
}