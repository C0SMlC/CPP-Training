#include <bits/stdc++.h>
using namespace std;

bool checkPalindromeRecursive(string s, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (s[start] != s[end])
    {
        return false;
    }

    return checkPalindromeRecursive(s, start + 1, end - 1);
}

bool checkPalindrome(string s)
{
    int length = s.length();
    return checkPalindromeRecursive(s, 0, length - 1);
}

int main()
{
    string s;
    cin >> s;
    cout<<checkPalindrome(s);
    return 0;
}