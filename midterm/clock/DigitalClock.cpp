#include "DigitalClock.h"
#include <sstream>
#include <iomanip>

DigitalClock::DigitalClock() : hours(0), minutes(0), seconds(0) {}

DigitalClock::DigitalClock(int h, int m, int s) {
    setHours(h);
    setMinutes(m);
    setSeconds(s);
}

int DigitalClock::getHours() const { return hours; }
int DigitalClock::getMinutes() const { return minutes; }
int DigitalClock::getSeconds() const { return seconds; }

void DigitalClock::setHours(int h) { hours = (h >= 0 && h < 24) ? h : 0; }
void DigitalClock::setMinutes(int m) { minutes = (m >= 0 && m < 60) ? m : 0; }
void DigitalClock::setSeconds(int s) { seconds = (s >= 0 && s < 60) ? s : 0; }

void DigitalClock::tick() {
    seconds++;
    if (seconds >= 60) {
        seconds = 0;
        minutes++;
        if (minutes >= 60) {
            minutes = 0;
            hours = (hours + 1) % 24;
        }
    }
}

std::string DigitalClock::to_string() const {
    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << hours << ":"
        << std::setw(2) << std::setfill('0') << minutes << ":"
        << std::setw(2) << std::setfill('0') << seconds;
    return oss.str();
}
