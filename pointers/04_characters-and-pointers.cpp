#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[] = {10, 20, 30, 40, 50};
    char name[] = "Pratik";

    char alphabet = 'A';
    char *pointer = &alphabet;

    char anotherString[] = "abcde";


    cout << *array << endl;
    cout << name << endl;

    cout << alphabet << endl;
    cout << pointer << endl;

    return 0;
}