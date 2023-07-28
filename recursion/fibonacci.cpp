#include <iostream>

int fibonacciRecursive(int n)
{
    // Base case: For n = 0 or n = 1, the Fibonacci number is n itself
    if (n == 0 || n == 1)
        return n;

    // Recursive case: Calculate the nth Fibonacci number by summing the (n-1)th and (n-2)th Fibonacci numbers
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main()
{
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int result = fibonacciRecursive(n);
    std::cout << "The " << n << "th Fibonacci number is: " << result << std::endl;

    return 0;
}
