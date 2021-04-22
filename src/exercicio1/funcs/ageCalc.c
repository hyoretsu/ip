#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <wchar.h>
#include "../headers/ageCalc.h"

const char* defaultValidString = "A data inserida é válida.\n";

const char* isValid(int day, int month, int year) {
    bool isLeap = false;
    // Check if given year is a leap one
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        isLeap = true;
    }

    // Check if given month's between January and December
    if (month >= 1 && month <= 12) {
        bool validDay = true;
        // Check for valid day count depending on month
        switch (month) {
            // February
            case 2:
                (day <= 0 || day > 28 + isLeap) && (validDay = false);
                break;
            // Months with 30 days
            case 4: case 6: case 9: case 11:
                (day <= 0 || day > 30) && (validDay = false);
                break;
            // Months with 31 days
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                (day <= 0 || day > 31) && (validDay = false);
                break;
        }
        if (!validDay) return "O dia que você inseriu é inválido. Tente novamente.\n";
    } else {
        return "O mês que você inseriu é inválido. Tente novamente.\n";
    }

    return defaultValidString;
}

int ageCalc(int birthDay, int birthMonth, int birthYear) {
    const char *validString = isValid(birthDay, birthMonth, birthYear);

    if (validString != defaultValidString) {
        wprintf(L"%s", validString);
        exit(0);
    }

    time_t t = time(NULL);
    struct tm userTime = *localtime(&t);
    currentDay = userTime.tm_mday;
    currentMonth = userTime.tm_mon + 1;
    currentYear = userTime.tm_year + 1900;

    int age = currentYear - birthYear;

    if ((currentMonth < birthMonth) || (currentMonth == birthMonth && currentDay < birthDay)) {
        age -= 1;
    }

    return age;
}
