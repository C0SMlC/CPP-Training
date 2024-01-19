#include <iostream>
using namespace std;

class IEmployee
{
public:
    IEmployee()
    {
    }

    virtual void Bonus(double amount) = 0;
};

class Developer : public IEmployee
{
public:
    Developer()
    {
    }

    void Bonus(double amount)
    {
        cout << "Developer: Bonus" << amount << endl;
    }
};

class Tester : public IEmployee
{
public:
    Tester()
    {
    }

    void Bonus(double amount)
    {
        cout << "Tester: Bonus" << amount << endl;
    }
};

// Third Party organization which will take decision on distributing bonus base on performance
// if Developer's performance is better then tester give 200000
// normally give 100000

void GiveBonusToEmployee(IEmployee *empPtr)
{
    // dynamic cast

    Developer *dPtr = dynamic_cast<Developer *>(empPtr);
    if (dPtr)
    {
        empPtr->Bonus(200000);
    }

    Tester *tPtr = dynamic_cast<Tester *>(empPtr);
    if (tPtr)
    {
        empPtr->Bonus(100000);
    }
}

int main()
{
    IEmployee *ptr = new Tester();
    GiveBonusToEmployee(ptr);
    IEmployee *ptr1 = new Developer();
    GiveBonusToEmployee(ptr1);

    return 0;
}