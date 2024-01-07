class Person
{
    int height;
    int weight;

public:
    Person(int height, int weight)
    {
        this->height = height;
        this->weight = weight;
    }

    virtual void print()
    {
        cout << "I am a Person with height " << this->height << endl;
    }
};

class Student : public Person
{
    int rollNo;

public:
    Student(int rollNo, int height, int weight) : Person(height, weight)
    {
        this->rollNo = rollNo;
    }
    void print() override
    {
        cout << "I am a student with roll number " << this->rollNo << endl;
    }
};