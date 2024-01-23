#include <iostream>

// Custom strcpy function for C++ using char arrays
char *strcpy(char *destination, const char *source)
{
    char *start = destination;

    // Copy characters from source to destination
    while ((*destination++ = *source++) != '\0')
    {
        // continue copying
    }

    return start;
}

int main()
{
    const char *source = "Hello, World!";
    char destination[20];

    // Using the custom strcpy function
    strcpy(destination, source);

    // Print the result
    std::cout << "Copied string: " << destination << std::endl;

    return 0;
}
