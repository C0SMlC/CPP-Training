// virtual pure destructor

class Animal
{

public:
    int age;
    int *ptr;

    Animal(int a)
    {
        this->age = 10;
        ptr = new int(20);
        cout << "Animal created" << endl;
    };
    virtual ~Animal() = 0;
};

Animal ::~Animal()
{
    cout << "Animal destroyed" << endl;
};

class Dog : public Animal
{
public:
    Dog(int age)
    {
        cout << "Dog created" << endl;
    }
    void sound()
    {
        cout << "Bark" << endl;
    }
    ~Dog()
    {
        cout << "Dog destroyed" << endl;
    }
};