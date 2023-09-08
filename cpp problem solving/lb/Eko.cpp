#include <bits/stdc++.h>
using namespace std;

bool isPossibleSolution(vector<long long int> treeHeights, long long int target, long long int mid)
{
    long long int woodCollected = 0;

    for (int height = 0; height < treeHeights.size(); height++)
    {
        if (treeHeights[height] > mid)
        {
            woodCollected += treeHeights[height] - mid;
        }
    }

    return woodCollected >= target;
}

long long int FindMinimumSawHeight(vector<long long int> treeHeights, long long int target)
{
    long long int start = 0;
    long long int end = *max_element(treeHeights.begin(), treeHeights.end());
    long long int ans = -1;

    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        if (isPossibleSolution(treeHeights, target, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<long long int> treeHeights;
    int data;
    cin >> data;

    while (data != -1)
    {
        treeHeights.push_back(data);
        cin >> data;
    }

    long long target;
    cout << "Enter target : ";
    cin >> target;
    cout << "The minimum of height of the saw is " << FindMinimumSawHeight(treeHeights, target) << endl;

    return 0;
}