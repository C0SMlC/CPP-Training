class complexNumber
{
    int realNumber;
    int imaginaryNumber;

public:
    complexNumber(int real, int imaginary)
    {
        this->realNumber = real;
        this->imaginaryNumber = imaginary;
    }

    complexNumber operator+(complexNumber const &c)
    {
        complexNumber *temp;
        temp->realNumber = this->realNumber + c.realNumber;
        temp->imaginaryNumber = this->imaginaryNumber + c.imaginaryNumber;
        return *temp;
    }

    complexNumber &operator++()
    {
        ++this->realNumber;
        ++this->imaginaryNumber;
        return *this;
    }

    complexNumber &operator++(int)
    {
        complexNumber *temp = new complexNumber(this->realNumber, this->imaginaryNumber);
        ++(*this);
        return *temp;
    }

    void print()
    {
        cout << this->realNumber << " + " << this->imaginaryNumber << "i" << endl;
    }
};

class Person
{
    int const birthYear;
    int age;
    char *name;
    static int totalPerson;

public:
    Person(int const &birthYea, char *const name) : birthYear(birthYea)
    {
        this->age = 2023 - birthYear;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    void print()
    {
        cout << this->name << " " << this->age << endl;
    }

    void friend setAge(Person &p, int age);
    void friend printAge(int age);
};

int Person::totalPerson = 0;

void setAge(Person &p, int age)
{
    p.age = age;
}

void printAge(int p)
{
    cout << p;
}

class child
{
    int age;

public:
    child(int age)
    {
        this->age = age;
        printAge(age);
    }
};