#include <bits/stdc++.h>
using namespace std;
int main()
{

    {
        unique_ptr<int> ptr = make_unique<int>(10);
        unique_ptr<int> ptr2 = move(ptr);
    }

    {
        shared_ptr<int> sharedPtr = make_shared<int>(10);
        cout << sharedPtr.use_count() << endl;
        shared_ptr<int> sharedPtr2 = sharedPtr;
        cout << sharedPtr.use_count() << endl;
    }

    {
        shared_ptr<int> sharedPtr = make_shared<int>(10);
        cout << sharedPtr.use_count() << endl;
        weak_ptr<int> weakPtr = sharedPtr;
        cout << sharedPtr.use_count() << endl;
    }

    return 0;
}