#include <bits/stdc++.h>
using namespace std;
class myClass
{
public:
    myClass()
    {
        cout << "Constructor Called" << endl;
    }

    void print()
    {
        cout << "Hey" << endl;
    }

    ~myClass()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    shared_ptr<myClass> sharedPtr = make_shared<myClass>();
    shared_ptr<myClass> sharedPtr2 = sharedPtr;

    cout << sharedPtr.use_count() << endl;
    sharedPtr->print();
    sharedPtr2->print();

    cout << sharedPtr.get() << endl;
    cout << sharedPtr2.get() << endl;
}