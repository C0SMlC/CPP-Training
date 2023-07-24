#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    cout << array << endl;
    cout << &array << endl;

    cout << *(array + 1) << endl;
    cout << *(array + 2) << endl;
    cout << 3 [array] << endl;
    cout << array[4] << endl;

    int *newArray = array;
    cout << newArray[4] << endl;

    return 0;
}