#include <bits/stdc++.h>
using namespace std;

class Fraction
{
    int num;
    int deno;

public:
    Fraction() {}
    Fraction(int num, int deno)
    {
        this->num = num;
        this->deno = deno;
    }

    Fraction &operator++()
    {
        this->num = this->num + 1;
        this->deno = this->deno + 1;

        return *this;
    }

    Fraction &operator++(int)
    {
        Fraction *a = new Fraction(this->num, this->deno);
        ++(*this);
        return *a;
    }

    void print()
    {
        cout << this->num << "/" << this->deno << endl;
    }
};

int main()
{
    Fraction f1(10, 20);
    f1.print();
    Fraction f2 = f1++;
    f2.print();
    f1.print();
}