#include <bits/stdc++.h>
using namespace std;

string replacePI(string s)
{
    if (s.length() <= 1)
    {
        return s;
    };  
    if (s.substr(0, 2) == "PI")
    {
        return "3.14" + replacePI(s.substr(2));
    }
    else
    {
        return s[0] + replacePI(s.substr(1));
    }
}

int main()
{
    string word;
    cin >> word;
    cout << replacePI(word);
    return 0;
}