#include <bits/stdc++.h>
using namespace std;
class myClass
{
public:
    myClass()
    {
        cout << "Constructor Called" << endl;
    }

    ~myClass()
    {
        cout << "Destructor Called" << endl;
    }
};
int main()
{

    {
        shared_ptr<myClass> ptr1 = make_shared<myClass>();
        unique_ptr<myClass> ptr1 = make_unique<myClass>();
        cout << ptr1.use_count() << endl;
        weak_ptr<myClass> ptr2 = ptr1;
        cout << ptr2.use_count() << endl;
    }
    cout << "New Scope Started" << endl;
    return 0;
}