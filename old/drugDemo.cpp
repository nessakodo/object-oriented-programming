#include <iostream>
#include <string>

#include "drug.h"

int main()
{
    int day;
    double percentage;
    double administered;

    std::cout << "enter a day: ";
    std::cin >> day;

    std::cout << "enter a remaining percentage: ";
    std::cin >> percentage;

    std::cout << "enter the amount of drug administered: ";
    std::cin >> administered;

    std::cout << "amount of drug in bloodstream on day " << day << ": " << concentration(day, percentage, administered) << " mg/mL" << std::endl;


    return 0;
}