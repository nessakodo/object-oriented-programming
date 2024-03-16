// Gadget.h
#ifndef GADGET_H
#define GADGET_H

#include <iostream>

class Gadget
{
    private:
    double batteryLevel;

    public:

        Gadget();
        Gadget(double batteryLevel);


        void setBatteryLevel(double aBatteryLevel);

        void charge(double percentage);

        double getBatteryLevel();

        void displayBatteryLevel();


};

#endif