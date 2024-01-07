#include <bits/stdc++.h>
using namespace std;

class MyClass
{

public:
    MyClass()
    {

        cout << "Constructor Called!!!" << endl;
    }

    ~MyClass()
    {
        cout << "Destructor Called!!!" << endl;
    }
};
int main()
{
    shared_ptr<MyClass> sharedPtr = make_shared<MyClass>();
    cout << sharedPtr << endl;
    cout << sharedPtr.use_count() << endl;
    {
        shared_ptr<MyClass> sharedPtr1(sharedPtr);
        cout << sharedPtr1 << endl;

        cout << sharedPtr1.use_count() << endl;
        cout << sharedPtr.use_count() << endl;
    }
    cout << sharedPtr.use_count() << endl;
    return 0;
}
