#include <iostream>
#include "DigitalClock.h"

int main() {
    DigitalClock clock(23, 59, 59);

    std::cout << "Current time: " << clock.to_string() << std::endl;
    clock.tick();
    std::cout << "After one second: " << clock.to_string() << std::endl;

    return 0;
}
