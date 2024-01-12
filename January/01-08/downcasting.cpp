#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    virtual void print()
    {
        cout << "This is parent's print function" << endl;
    }

    void parentSpecificFunction()
    {
        cout << "THis is a parent specific function" << endl;
    }
};

class Child : public Parent
{
public:
    void print() override
    {
        cout << "This is child's print function" << endl;
    }

    void childSpecificFunction()
    {
        cout << "THis is a child specific function" << endl;
    }
};

int main()
{
    // Upcasting
    Child c1;
    Parent *p1 = &c1;
    p1->print();
    p1->parentSpecificFunction();

    cout << "*****************************" << endl;
    // Downcasting
    Parent *m1 = new Child();
    m1->parentSpecificFunction();
    Child *refToM1 = dynamic_cast<Child *>(m1);
    refToM1->childSpecificFunction();
    refToM1->parentSpecificFunction();
    refToM1->print();

    return 0;
}
