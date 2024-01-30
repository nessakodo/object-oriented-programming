#include <iostream>
#include "func.h"

int passByValue(int aIn, int bIn) 
{
    aIn += 2;
    bIn += 3;
    return aIn + bIn;
}

int passByReference(int& aIn, int& bIn) 
{
    aIn += 2;
    bIn += 3;

    int result = aIn + bIn;
    return result;
}

