    // Question 2 Main Runner

    #include <iostream>
    #include <string>

    #include "evens.h"

    int main()
    {

        int num;


    // Getting input and adding element to vector
    std::cout << "Please enter a positive number: " << std::endl;
    std::cin >> num;
    addToVector(num);

    // Testing calculations

    int sumResult = getSum();
    int formulaResult = getFormula(num);

    std::cout << "Summing even mumbers :" << sumResult << std::endl;
    std::cout << "Formula result :" << formulaResult << std::endl;

    std::cout << "Equal Results? " << std::endl;


    // Checking if the results are equal
    std::cout << (sumResult == formulaResult ? "Equal\n" : "Not Equal\n");


    return 0;

    };