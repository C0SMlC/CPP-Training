#include <iostream>
using namespace std;

template <typename T, typename M, typename N>
N sum(T a, M b)
{
    return a + b;
}

template <>
string sum(string s, string s1)
{
    return s + s1;
}

// Generic class template
template <typename T>
class MyContainer
{
public:
    MyContainer(T value) : data(value) {}

    void display()
    {
        cout << "Generic container: " << data << endl;
    }

private:
    T data;
};

// Specialized class template for char* type
template <>
class MyContainer<float>
{
public:
    MyContainer(float value) : data(value) {}

    void display()
    {
        cout << "Specialized container for strings: " << data << endl;
    }

private:
    float data;
};

int main()
{
    cout << sum<int, double, int>(10, 10.25) << endl;
    cout << sum<string, string, string>("jkn", "hj") << endl;

    // Generic container
    MyContainer<int> intContainer(42);
    intContainer.display();

    // Specialized container for char*
    MyContainer<float> strContainer(545.31);
    strContainer.display();

    return 0;
}
