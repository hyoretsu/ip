#ifndef AGECALC_H
#define AGECALC_H

#include <time.h>

int currentDay;
int currentMonth;
int currentYear;

const char* isValid(int day, int month, int year);
// Leia o dia, o mês e o ano de nascimento do usuário e o dia, o mês e ano atuais. (automaticamente) Exiba na tela a idade do usuário e se é maior de idade.
int ageCalc(int day, int month, int year);

#endif
