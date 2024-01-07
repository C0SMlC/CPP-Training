#include <iostream>

static int internalVar = 10; // Internal linkage

namespace
{
    int noLinkageVar = 30; // No linkage
}