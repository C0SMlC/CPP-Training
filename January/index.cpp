#include <iostream>
#include <string>
#include <type_traits>

template <class T>
T Sum(T x, T y)
{
    if (std::is_same<T, int>::value)
    {
        std::cout << "Type is int" << std::endl;
    }
    else if (std::is_same<T, std::string>::value)
    {
        std::cout << "Type is std::string" << std::endl;
        return x + y; // Concatenate strings
    }

    return x + y;
}

int main()
{
    std::cout << Sum(2, 3) << std::endl;
    std::cout << Sum(2.12, 3.21) << std::endl;
    std::cout << Sum(std::string("hii"), std::string("Pratik")) << std::endl;
}
