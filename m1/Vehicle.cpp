#include <iomanip>
#include "Vehicle.h"

Vehicle::Vehicle() : brand(""), theType(""), subType(""), fuelType(""), price(0.0) {}

Vehicle::Vehicle(string brand, int theTypeInt, int theFuelInt, float price)
    : brand(brand), theType(stringSubType(theTypeInt)), fuelType(stringFuelType(theFuelInt)), price(price) {}

string Vehicle::getBrand() { return brand; }

string Vehicle::getType() { return theType; }

string Vehicle::getSubType() { return subType; }

string Vehicle::getFuelType() { return fuelType; }

float Vehicle::getPrice() { return price; }

void Vehicle::setBrand(string aBrand) { brand = aBrand; }

void Vehicle::setType(int theTypeInt) { theType = stringSubType(theTypeInt); }

void Vehicle::setSubType(int theTypeInt) { subType = stringSubType(theTypeInt); } // Modified to take type int

void Vehicle::setFuel(int theFuelInt) { fuelType = stringFuelType(theFuelInt); }

void Vehicle::setPrice(float aPrice) { price = aPrice; }

string Vehicle::stringSubType(int theTypeInt)
{
    switch (theTypeInt)
    {
    case 1: // Car
        return "sedan";
    case 2: // Truck
        return "pickup";
    default:
        return "Unknown";
    }
}

string Vehicle::stringFuelType(int theFuelInt)
{
    switch (theFuelInt)
    {
    case 1:
        return "gas";
    case 2:
        return "diesel";
    case 3:
        return "electric";
    default:
        return "Unknown";
    }
}

void Vehicle::display()
{
    std::cout << std::string(44, '*') << std::endl;
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Type: " << subType << std::setw(20) 
              << "Subtype: " << theType << std::endl;
    std::cout << "Fuel Type: " << fuelType << std::endl;
    std::cout << "Cost: $" << std::fixed << std::setprecision(2) << price << std::endl;
    std::cout << std::string(44, '*') << std::endl;
}
