#include "DigitalClock.h"
#include <iostream>
#include <iomanip>

DigitalClock::DigitalClock() : hours(0), minutes(0), seconds(0), 
    alarmHours(0), alarmMinutes(0), alarmSeconds(0),
    timerHours(0), timerMinutes(0), timerSeconds(0), timerRunning(false) {}

DigitalClock::DigitalClock(int h, int m, int s) : hours(h), minutes(m), seconds(s), 
    alarmHours(0), alarmMinutes(0), alarmSeconds(0),
    timerHours(0), timerMinutes(0), timerSeconds(0), timerRunning(false) {}

int DigitalClock::getHours() const { return hours; }
int DigitalClock::getMinutes() const { return minutes; }
int DigitalClock::getSeconds() const { return seconds; }

void DigitalClock::setHours(int h) { hours = (h >= 0 && h < 24) ? h : 0; }
void DigitalClock::setMinutes(int m) { minutes = (m >= 0 && m < 60) ? m : 0; }
void DigitalClock::setSeconds(int s) { seconds = (s >= 0 && s < 60) ? s : 0; }

void DigitalClock::setAlarm(int hour, int minute, int second) {
    alarmHours = hour;
    alarmMinutes = minute;
    alarmSeconds = second;
}

bool DigitalClock::checkAlarm() {
    return (hours == alarmHours && minutes == alarmMinutes && seconds == alarmSeconds);
}

void DigitalClock::startTimer(int hour, int minute, int second) {
    timerHours = hour;
    timerMinutes = minute;
    timerSeconds = second;
    timerRunning = true;
}

void DigitalClock::stopTimer() {
    timerRunning = false;
}

bool DigitalClock::isTimerRunning() {
    return timerRunning;
}

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

    // Check alarm
    if (checkAlarm()) {
        std::cout << "Alarm ringing!" << std::endl;
    }

    // Check timer
    if (timerRunning) {
        if (hours == timerHours && minutes == timerMinutes && seconds == timerSeconds) {
            std::cout << "Timer finished!" << std::endl;
            timerRunning = false;
        }
    }
}

std::string DigitalClock::to_string() const {
    std::string time;
    time += (hours < 10 ? "0" : "") + std::to_string(hours) + ":";
    time += (minutes < 10 ? "0" : "") + std::to_string(minutes) + ":";
    time += (seconds < 10 ? "0" : "") + std::to_string(seconds);
    return time;
}
