#include <time.h>
#include "../headers/ageCalc.h"

int ageCalc(int birthDay, int birthMonth, int birthYear) {
    time_t t = time(NULL);
    struct tm userTime = *localtime(&t);
    currentDay = userTime.tm_mday + 1;
    currentMonth = userTime.tm_mon + 1;
    currentYear = userTime.tm_year + 1900;

    int age = currentYear - birthYear;

    if ((currentMonth < birthMonth) || (currentMonth == birthMonth && currentDay < birthDay)) {
        age -= 1;
    }

    return age;
}
