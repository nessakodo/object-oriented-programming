#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

#include <string>

class DigitalClock {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructors
    DigitalClock();
    DigitalClock(int h, int m, int s);

    // Accessors
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;

    // Mutators
    void setHours(int h);
    void setMinutes(int m);
    void setSeconds(int s);

    // Member Functions
    void tick();
    std::string to_string() const;
};

#endif // DIGITALCLOCK_H
