#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    virtual void print()
    {
        cout << "Parent Print Called" << endl;
    }

    void parentSpecificFunction()
    {
        cout << "This is a parent specific function" << endl;
    }
};

class Child : public Parent
{
public:
    void print() override
    {
        cout << "Child Print Called" << endl;
    }

    void childSpecificFunction()
    {
        cout << "This is a child specific function" << endl;
    }
};

int main()
{

    // Upcasting
    Parent *P;
    Child c;
    P = &c;
    P->print();

    // Downcasting

    Parent *p = new Child();
    Child *ptr = dynamic_cast<Child *>(p);
    ptr->childSpecificFunction();
    return 0;
}