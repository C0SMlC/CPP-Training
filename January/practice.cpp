#include <iostream>
using namespace std;
class Base
{
public:
    int static totalStudents;
    int age = 10;
    void disp()
    {
        cout << " It is the Super function of the Base class ";
    }
};

class derive : public Base
{
    // get the age from parent;
    int commonAge = Base::age;

public:
    void disp()
    {
        cout << "\n It is the derive class function " << this->commonAge;
    }
};

int Base ::totalStudents = 0;

int main()
{
    Base *ptr;
    derive obj;
    obj.disp();
    ptr = &obj;
    ptr->disp();

    return 0;
}