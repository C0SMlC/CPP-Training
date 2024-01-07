#include <iostream>
#include <memory>

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
    unique_ptr<MyClass> uniqPtr;

    {
        unique_ptr<MyClass> uniqPtr1(new MyClass());
        uniqPtr = move(uniqPtr1);
        cout << "Yooo" << endl;
    }
    cout << "Yooo" << endl;
    return 0;
}