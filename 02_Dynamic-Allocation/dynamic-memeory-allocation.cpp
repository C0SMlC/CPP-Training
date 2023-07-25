#include <bits/stdc++.h>
using namespace std;

int main()
{
    // statically assigned memeory in the stack memory
    int i = 10;
    // dynamically assigned memeory in the heap memory
    int *num = new int;
    *num = 10;
    cout << num << endl;
    cout << *num << endl;

    // creating array dynamically

    int *array = new int[5];

    cout << sizeof(array) << endl;

    for (int i = 0; i < 5; i++)
    {
        array[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    delete num;
    delete[] array;
}