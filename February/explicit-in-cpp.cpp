#include <iostream>
using namespace std;

class MyClass
{

public:
    // Regular constructor
    MyClass() {}
    explicit MyClass(int x) : value(x) {}

    // Getter function
    int getValue() const
    {
        return value;
    }

    void operator=(int x)
    {
        this->value = x;
    }

private:
    int value;
};

int main()
{
    // Using explicit constructor - OK
    MyClass obj1(42.59595);

    // Implicit conversion prevented by explicit keyword
    // Uncommenting the line below will result in a compilation error
    // MyClass obj2 = 42;

    // Accessing the value using the getter function
    // std::cout << "Value: " << obj1.getValue() << std::endl;
    // std::cout << "Value: " << obj2.getValue() << std::endl;

    return 0;
}
