class Student
{
    char *name;
    int age;
    int rollNo;

public:
    Student(char *name, int age, int rollNo)
    {
        this->age = age;
        this->rollNo = rollNo;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    void print()
    {
        cout << "My name is " << this->name << " age and roll number is " << this->age << " " << this->rollNo << endl;
    }
};