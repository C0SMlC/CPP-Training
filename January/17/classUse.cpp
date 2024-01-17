#include <iostream>
using namespace std;

#include "class.h"
int main()
{
    Stack<int> s;
    cout << s.pop();
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);

    // s.print();

    // s.pop();
    // s.print();
    // s.peek();

    // cout << s.isEmpty();
}

// Overloading the new operator
void *operator new(size_t size)
{
    cout << "Global operator new called, size = " << size << endl;
    void *ptr = malloc(size);
    if (ptr)
        return ptr;
    else
        throw bad_alloc();
}

// Overloading the delete operator
void operator delete(void *pointerToDelete) noexcept
{
    cout << "Global operator delete called" << endl;
    free(pointerToDelete);
}

// Overloading the global new[] operator
void *operator new[](size_t size)
{
    cout << "Global operator new[] called, size = " << size << endl;
    void *ptr = malloc(size);
    if (ptr)
        return ptr;
    else
        throw bad_alloc();
}

// Overloading the global delete[] operator
void operator delete[](void *arrayPointerToDelete) noexcept
{
    cout << "Global operator delete[] called" << endl;
    free(arrayPointerToDelete);
}