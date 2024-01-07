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

    Fraction &operator=(const Fraction &f)
    {
        if (this != &f)
        {
            this->num = f.num;
            this->deno = f.deno;
        }
        return *this;
    }

    void
    print()
    {
        cout << this->num << "/" << this->deno << endl;
    }
};