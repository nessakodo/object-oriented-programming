// Gadget.h
#include "Gadget.h"

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>


Gadget::Gadget()
:
batteryLevel(0.0)
{
    
}

Gadget::Gadget(double batteryLevel)
:
batteryLevel(batteryLevel)
{

}


void Gadget::setBatteryLevel(double aBatteryLevel)
{
    batteryLevel = aBatteryLevel;
}

void Gadget::charge(double percentage)
{
    double newBatteryLevel;
    newBatteryLevel = batteryLevel * ( 1 + (percentage/100));
    batteryLevel = newBatteryLevel;
}

double Gadget::getBatteryLevel()
{
    return batteryLevel;
}

void Gadget::displayBatteryLevel()
{
    std::cout << "Battery Level: " << std::fixed << std::setprecision(2) << batteryLevel << "%";
}


// Use std::fixed and std::setprecision(2) to format the battery level output to two decimal places.
// Display the battery level as a percentage, appending a "%" sign after the value.

int main()
{
    Gadget gadget = Gadget(100);
    std::cout << "Battery Level Before Charge: " << std::endl;
    gadget.displayBatteryLevel();
    std::cout << std::endl;

    gadget.charge(5.6);
    // gadget.getBatteryLevel();
    
    std::cout << "Battery Level After Charge: " << std::endl;
    gadget.displayBatteryLevel();
    std::cout << std::endl;

    return 0;
}