#include <iostream>

class Base
{
public:
    virtual ~Base()
    {
        std::cout << "Base destructor\n";
    }

    virtual void someFunction()
    {
        std::cout << "Base class function\n";
    }
};

class Derived : public Base
{
public:
    ~Derived() override
    {
        std::cout << "Derived destructor\n";
    }

    void someFunction() override
    {
        std::cout << "Derived class function\n";
    }
};

int main()
{
    Base *obj = new Derived();
    obj->someFunction();

    delete obj; // Calls the Derived destructor due to the virtual destructor in the Base class

    return 0;
}
