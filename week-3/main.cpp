#include <iostream>
#include "func.cpp"

int main()
{

    int xVar = 0;
    int yVar(0);

    // pass by value
    int value = passByValue(xVar, yVar);
    std::cout << value << std::endl;

    // pass by reference
    int reference = passByReference(xVar, yVar);
    std::cout << reference << std::endl;

    return 0;
}