#include <iostream>

// Function prototype
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int main()
{
    // Declare a function pointer for a function taking two ints and returning an int
    int (*method)(int, int);

    // Initialize the function pointer with the address of the 'add' function
    method = add;

    // Using the function pointer to call the 'add' function
    int result = method(5, 3);
    std::cout << "Result: " << result << std::endl;

    // Change the function pointer to point to the 'subtract' function
    method = subtract;

    // Use the function pointer to call the 'subtract' function
    result = method(5, 3);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
