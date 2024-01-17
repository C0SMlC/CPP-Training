#include <bits/stdc++.h>

using namespace std;

void *operator new(size_t val)
{
    void *ptr = malloc(val);

    if (ptr)
        return ptr;
    else
        throw bad_alloc();
}

void operator delete(void *ptr) noexcept
{
    free(ptr);
}

void *operator new[](size_t val)
{
    void *ptr = malloc(val);
    if (ptr)
        return ptr;
    else
        throw bad_alloc();
}
int main()
{
    int *intPtr = new int(8); // calls the global new
    int *newptr = new int[10];

        cout << *intPtr;
    return 0;
}