#include <iostream>
using namespace std;

class Example
{
private:
    int regularVariable;
    mutable int mutableVariable;

public:
    Example(int reg, int mut) : regularVariable(reg), mutableVariable(mut) {}

    void printValues(int const x) const
    {
        cout << "Regular Variable: " << regularVariable << endl;
        cout << "Mutable Variable: " << mutableVariable << endl;

        mutableVariable = x;
        cout << "Modified Mutable Variable: " << mutableVariable << endl;
    }
};

int main()
{
    Example obj(42, 24);

    obj.printValues(10);

    return 0;
}
