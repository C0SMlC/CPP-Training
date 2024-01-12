#include <bits/stdc++.h>
using namespace std;

class ComplexNumber
{
    int real;
    int imaginary;

public:
    ComplexNumber(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    ComplexNumber operator+(ComplexNumber const &num)
    {
        ComplexNumber newNum(this->real + num.real, this->imaginary + num.imaginary);
        return newNum;
    }

    ComplexNumber &operator++()
    {
        this->real = this->real + 1;
        this->imaginary = this->imaginary + 1;
        return *this;
    }

    ComplexNumber &operator++(int)
    {

        ComplexNumber *cnew;
        cnew->imaginary = this->imaginary;
        cnew->real = this->real;
        ++(*this);
        return *cnew;
    }

    void print()
    {
        cout << this->real << " + i" << this->imaginary << endl;
    }
};

int main()
{
    ComplexNumber x(10, 20);
    ComplexNumber y(10, 20);
    // x.print();
    ComplexNumber z = (x + y) + (x + y);
    // z.print();

    ComplexNumber a = ++(++z);
    a.print();
    z.print();

    ComplexNumber j = x++;
    x.print();
    j.print();

    return 0;
}