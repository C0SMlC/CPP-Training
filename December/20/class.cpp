class Number
{
    int realNumber;
    int imaginaryNumber;

public:
    Number(int real, int imaginary)
    {
        this->realNumber = real;
        this->imaginaryNumber = imaginary;
    }

    Number &operator++()
    {
        ++this->realNumber;
        ++this->imaginaryNumber;

        return *this;
    }

    Number &operator++(int)
    {
        Number *temp = new Number(this->realNumber, this->imaginaryNumber);
        ++(*this);
        return *temp;
    }

    void print()
    {
        cout << this->realNumber << " + " << this->imaginaryNumber << endl;
    }

    ~Number()
    {
        this;
    }
};

class Person
{
    char *name;
    int const birthYear;
    int age;

    int static totalPerson;

public:
    Person(char *name, int age, int year) : birthYear(year)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);

        this->age = age;

        Person::totalPerson++;
    }

    virtual void print()
    {
        cout << " i am " << this->name << " with born in " << this->birthYear << " and age " << this->age << endl;
    }

    int const getAge()
    {
        return this->age;
    }

    char const *getName()
    {
        return this->name;
    }

    void static printTotal()
    {
        cout << Person::totalPerson << endl;
    }

    ~Person()
    {
        delete[] name;
    }
};

class Student : public Person
{
    int studentId;

public:
    Student(char *name, int age, int studentId, int year) : Person(name, age, year)
    {
        this->studentId = studentId;
    }

    void print() override
    {
        cout << " i am " << getName() << " with age " << getAge() << " and student id " << this->studentId << endl;
    }
};

class PatientDeepCopy
{
public:
    char *name;
    int age;
    int patientId;

    PatientDeepCopy(char *name, int age, int patientId)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->age = age;
        this->patientId = patientId;
    }

    // Deep Copy
    PatientDeepCopy(PatientDeepCopy &obj)
    {
        this->age = obj.age;
        this->patientId = obj.patientId;
        this->name = new char[strlen(obj.name) + 1];
        strcpy(this->name, obj.name);
    }

    void display()
    {
        cout << this->name << " " << this->age << " " << this->patientId << endl;
    }
};

class PatientShallowCopy
{
public:
    char *name;
    int age;
    int patientId;

    PatientShallowCopy(char *name, int age, int patientId)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->age = age;
        this->patientId = patientId;
    }

    // Deep Copy
    // PatientShallowCopy(PatientShallowCopy &obj)
    // {
    //     this->age = obj.age;
    //     this->patientId = obj.patientId;
    //     this->name = new char[strlen(obj.name) + 1];
    //     strcpy(this->name, obj.name);
    // }

    void display()
    {
        cout << this->name << " " << this->age << " " << this->patientId << endl;
    }
};

class FriendFunction
{
    int privateKey;
    int superPrivateKey;

public:
    FriendFunction(int privateKey, int superPrivateKey)
    {
        this->privateKey = privateKey;
        this->superPrivateKey = superPrivateKey;
    }

    void friend print(FriendFunction &obj);
};

void print(FriendFunction &obj)
{

    cout << obj.privateKey << endl;
    cout << obj.superPrivateKey << endl;
}

int Person::totalPerson = 0;
