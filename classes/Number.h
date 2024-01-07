class complexNumber
{
    int realNumber;
    int imaginaryNumber;

public:
    // Constructor
    complexNumber()
    {
    }

    complexNumber(int realNumber, int imaginaryNumber)
    {
        this->realNumber = realNumber;
        this->imaginaryNumber = imaginaryNumber;
    }

    complexNumber addition(complexNumber const &c)
    {
        complexNumber temp;
        temp.realNumber = this->realNumber + c.realNumber;
        temp.imaginaryNumber = this->imaginaryNumber + c.imaginaryNumber;
        return temp;
    }

    complexNumber operator+(complexNumber const &c)
    {
        complexNumber temp;
        temp.realNumber = this->realNumber + c.realNumber;
        temp.imaginaryNumber = this->imaginaryNumber + c.imaginaryNumber;
        return temp;
    }

    bool operator==(complexNumber const &c)
    {
        return this->realNumber == c.realNumber && this->imaginaryNumber == c.imaginaryNumber;
    }

    complexNumber &operator++()
    {
        ++this->realNumber;
        ++this->imaginaryNumber;
        return *this;
    }

    complexNumber operator++(int)
    {
        complexNumber temp = *this;
        ++(*this);
        return temp;
    }

    complexNumber &operator+=(complexNumber const &c)
    {
        this->realNumber = this->realNumber + c.realNumber;
        this->imaginaryNumber = this->imaginaryNumber + c.imaginaryNumber;

        return *this;
    }

    void print()
    {
        cout << this->realNumber << " + i" << this->imaginaryNumber << endl;
    }
};