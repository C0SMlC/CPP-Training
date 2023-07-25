#include <bits/stdc++.h>
using namespace std;

inline void printArray(int *array, int size, int startingIndex = 0)
{
    for (int i = startingIndex; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    printArray(array, 5, 2);
    return 0;
}