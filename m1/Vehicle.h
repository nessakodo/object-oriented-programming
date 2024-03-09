#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using std::string;

class Vehicle
{
private:
    string brand;
    string theType;
    string subType; // Added subtype string
    string fuelType;
    float price;

public:
    Vehicle();
    Vehicle(string brand, int theTypeInt, int theFuelInt, float price); // Modified constructor

    string getBrand();
    string getType();
    string getSubType();
    string getFuelType();
    float getPrice();

    void setBrand(string aBrand);
    void setType(int theTypeInt);
    void setSubType(int theTypeInt); // Modified to take type int
    void setFuel(int theFuelInt);
    void setPrice(float price);

    string stringSubType(int theTypeInt); // Modified to take type int
    string stringFuelType(int theFuelInt); // Modified to take fuel int

    void display();
};

#endif
