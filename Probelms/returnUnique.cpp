#include <bits/stdc++.h>
using namespace std;

int findUnique(vector<int> &nums)
{
    int unique = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        unique = unique ^ nums[i];
    }
    return unique;
}

int main()
{
    vector<int> elements = {10, 20, 30, 4, 10, 20, 30};

    for (int i = 0; i < elements.size(); i++)
    {
        cout << elements[i] << " ";
    }
    cout << endl;

    cout << findUnique(elements);

    return 0;
}