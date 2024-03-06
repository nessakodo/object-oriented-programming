#include "drug.h"

double concentration(int day, double percentage, double administered)
{

    if (day == 0)
    {
        return 0;
    }
    else
    {
        return percentage * concentration(day - 1, percentage, administered) + administered;
    }
}