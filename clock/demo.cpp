#include "DigitalClock.h"
#include <iostream>

int main() {
    DigitalClock clock;

    // Set alarm for 10:00:00
    clock.setAlarm(10, 0, 0);

    // Start timer for 0:0:10
    clock.startTimer(0, 0, 10);

    // Simulate time passing
    for (int i = 0; i < 15; i++) {
        std::cout << "Current time: " << clock.to_string() << std::endl;
        clock.tick();
    }

    return 0;
}
