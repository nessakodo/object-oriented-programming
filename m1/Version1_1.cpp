#include <iostream>
#include "Vehicle.h"

int main()
{
    // Create a car and a truck
    Vehicle car("4Runner", 1, 1, 25000.0); // Type: 1 (car), Subtype: sedan
    Vehicle truck("Subaru", 2, 2, 35000.0); // Type: 2 (truck), Subtype: pickup

    // Display vehicle information
    std::cout << "Car Information:" << std::endl;
    car.display();

    std::cout << "\nTruck Information:" << std::endl;
    truck.display();

    return 0;
}
