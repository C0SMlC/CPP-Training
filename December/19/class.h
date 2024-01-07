class ComplexNumber
{
    int realNumber;
    int imaginaryNumber;

public:
    ComplexNumber()
    {
    }
    ComplexNumber(int realNumber, int imaginaryNumber)
    {
        this->realNumber = realNumber;
        this->imaginaryNumber = imaginaryNumber;
    }

    ComplexNumber &operator++()
    {
        ++this->realNumber;
        ++this->imaginaryNumber;
        return *this;
    }

    ComplexNumber &operator++(int)
    {
        ComplexNumber temp = *this;
        ++(*this);
        return temp;
    }

    ComplexNumber operator+(ComplexNumber c1)
    {
        ComplexNumber temp;
        temp.realNumber = this->realNumber + c1.realNumber;
        temp.imaginaryNumber = this->imaginaryNumber + c1.imaginaryNumber;

        return temp;
    }

    void print()
    {
        cout << this->realNumber << " + " << this->imaginaryNumber << "i" << endl;
    }
};