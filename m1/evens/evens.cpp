// evens.cpp

#include <iostream>
#include <string>
#include <vector>

#include "evens.h"

// Creating the Vector
std::vector<int> myNums;

// Adding to vector from user input
void addToVector(int num)
{

    for (int i = 0; i < num; i++)
    {
        myNums.push_back(num + 2);
    }

}

    
// Calculating the sum of the items within the vector
int getSum()
{
    int sum = 0;
    // int n;/

    for (int n : myNums)
    sum += n;
    return sum;

}

// Calculation using the (n(n+1)) formula
int getFormula(int num)
{
    return (num * (num+1));

}



