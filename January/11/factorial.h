class factorial
{
    int numerator;
    int denominator;

public:
    factorial(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    factorial(const factorial &f)
    {
        numerator = f.numerator;
        denominator = f.denominator;
    }

    factorial &operator=(const factorial &f)
    {
        if (this != &f)
        {
            numerator = f.numerator;
            denominator = f.denominator;
        }
        return *this;
    }

    factorial &operator+(const factorial &f)
    {
        numerator = numerator * f.denominator + denominator * f.numerator;
        denominator = denominator * f.denominator;
        return *this;
    }

    factorial &operator*(const factorial &f)
    {
        numerator = numerator * f.numerator;
        denominator = denominator * f.denominator;
        return *this;
    }

    factorial &operator/(const factorial &f)
    {
        numerator = numerator * f.denominator;
        denominator = denominator * f.numerator;
        return *this;
    }

    factorial &operator%(const factorial &f)
    {
        numerator = numerator * f.denominator;
        denominator = denominator * f.numerator;
        return *this;
    }

    void print()
    {
        cout << numerator << "/" << denominator << endl;
    }

    int getNumerator()
    {
        return numerator;
    }

    int getDenominator()
    {
        return denominator;
    }
};