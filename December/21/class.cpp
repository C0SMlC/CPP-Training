class Person
{
    int age;
    char *name;

public:
    Person(int abc, char *name)
    {

        this->age = age;
        // this->name = name;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    void print()
    {
        cout << this->name << " " << this->age << endl;
    }
};