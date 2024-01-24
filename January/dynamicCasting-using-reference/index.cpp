#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual void print() const
    {
        std::cout << "Base class" << std::endl;
    }
};

class Derived : public Base
{
public:
    void print() const override
    {
        cout << "Derived class" << endl;
    }
    void fuuu()
    {
        cout << "fuu" << endl;
    }
};

int main()
{
    // Dynamic cast using reference works in similar way as it works with pointers
    Derived derivedObj;
    Base &baseRef = derivedObj;

    // Object slicing since the object is of type base and is initialised with derved class the dervied class methods are sliced up
    // to the base class
    // Derived derivedObj;
    // Base baseRef = derivedObj;

    baseRef.print();

    // Attempting dynamic_cast with references
    try
    {
        Derived &derivedRef = dynamic_cast<Derived &>(baseRef);

        // The dynamic_cast was successful
        cout << "Dynamic cast successful" << endl;
        derivedRef.print();

        // You can now use derivedRef safely
        derivedRef.print(); // Calls the overridden print function in Derived class
    }
    catch (const bad_cast &e)
    {
        // The dynamic_cast failed
        cerr << "Dynamic cast failed: " << e.what() << endl;
    }

    return 0;
}
