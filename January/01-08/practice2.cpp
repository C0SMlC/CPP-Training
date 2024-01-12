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
    Parent *ptr = new Child();
    int *arr = new int[5];
    int **doublearr = new int *[5];

    for (int i = 0; i < 5; i++)
    {
        doublearr[i] = new int(10);
    }

    ptr->print();
    ptr->parentSpecificFunction();

    Child *newptr = dynamic_cast<Child *>(ptr);
    newptr->childSpecificFunction();

    delete[] arr;
    return 0;
}