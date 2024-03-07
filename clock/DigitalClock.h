#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

#include <string>

class DigitalClock {
private:
    int hours;
    int minutes;
    int seconds;
    int alarmHours;
    int alarmMinutes;
    int alarmSeconds;
    int timerHours;
    int timerMinutes;
    int timerSeconds;
    bool timerRunning;

public:
    DigitalClock();
    DigitalClock(int h, int m, int s);
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;
    void setHours(int h);
    void setMinutes(int m);
    void setSeconds(int s);
    void setAlarm(int hour, int minute, int second);
    bool checkAlarm();
    void startTimer(int hour, int minute, int second);
    void stopTimer();
    bool isTimerRunning();
    void tick();
    std::string to_string() const;
};

#endif
