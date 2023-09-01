#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;

int romanToInt(string s)
{
    unordered_map<char, int> roman_values = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

    int result = 0;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        int val = roman_values[c];
        result += val;
    }

    return result;
}

int main()
{
    std::cout << romanToInt("III") << std::endl;     // Output: 3
    std::cout << romanToInt("LVIII") << std::endl;   // Output: 58
    std::cout << romanToInt("MCMXCIV") << std::endl; // Output: 1994

    return 0;
}
