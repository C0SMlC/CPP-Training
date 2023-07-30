#include <bits/stdc++.h>
using namespace std;

int findLastIndex(int *arr, int size, int target, int currentIndex = 0)
{
    if (currentIndex >= size)
        return -1;

    int lastIndex = findLastIndex(arr, size, target, currentIndex + 1);

    if (arr[currentIndex] == target)
        return max(lastIndex, currentIndex);

    return lastIndex;
}

int main()
{
    int array[] = {1, 2, 4, 3, 4, 6, 7, 8, 9, 7};
    int size = sizeof(array) / sizeof array[0];
    int target;
    cin >> target;
    cout << findLastIndex(array, size, target);
    return 0;
}