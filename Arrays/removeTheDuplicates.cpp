#include <bits/stdc++.h>
using namespace std;

double removeTheDuplicates(vector<int> &nums)
{
    int size = nums.size();

    if (size == 0)
        return 0;

    int i = 0;
    for (int j = 0; j < size; j++)
    {
        if (nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
        }
    }
    return i;
}
int main()
{
    vector<int> x = {1, 1, 2, 3, 3, 3, 4, 5};
    cout << removeTheDuplicates(x) << endl;

    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}