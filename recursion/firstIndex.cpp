#include <bits/stdc++.h>
using namespace std;

int findFirstIndex(int *arr, int size, int target, int currentIndex = 0)
{
    // Check if the current index is gretaer than or equal to the size
    // In that case the array either is empty or cotains only one element or the number is not present
    if (currentIndex >= size)
        return -1;
    if (arr[currentIndex] == target)
        return currentIndex;
    return findFirstIndex(arr, size, target, currentIndex + 1);
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(array) / sizeof array[0];
    int target;
    cin >> target;

    int result = findFirstIndex(array, size, target);
    if (result != -1)
    {
        cout << "The first occurrence of " << target << " is at index: " << result << std::endl;
    }
    else
    {
        cout << "Element " << target << " not found in the array." << std::endl;
    }
    return 0;
}