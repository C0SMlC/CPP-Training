#include <bits/stdc++.h>
using namespace std;

class Person
{
    static int count;
    int age;

public:
    Person(int age)
    {
        this->age = age;
        count++;
    }
    static int getCount()
    {
        // can not access non static members eg. age here in the static function it can only access the static members
        return count;
    }
};

int Person::count = 0;

int main()
{
    Person p1(20);
    cout << p1.getCount();
    return 0;
}