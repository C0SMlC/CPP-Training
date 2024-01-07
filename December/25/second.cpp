#include <iostream>
int globalVar = 20; // External linkage

extern int internalVar;  // Declaration of internalVar from another file
extern int noLinkageVar; // Declaration of noLinkageVar from another file

int main()
{
    std::cout << "Internal Linkage Variable: " << internalVar << std::endl;
    std::cout << "External Linkage Variable: " << globalVar << std::endl;
    // std::cout << "No Linkage Variable: " << noLinkageVar << std::endl; // Error, noLinkageVar not accessible here
    return 0;
}