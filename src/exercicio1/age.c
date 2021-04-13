// Leia o dia, o mês e o ano de nascimento do usuário e o dia, o mês e ano atuais. (automaticamente) Exiba na tela a idade do usuário e se é maior de idade.
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <wchar.h>

int main(void) {
    setlocale(LC_ALL, "");
    int age, day, month, year;

    wprintf(L"Digite seu dia de nascimento: ");
    wscanf(L"%d", &day);
    wprintf(L"Digite seu mês de nascimento: ");
    wscanf(L"%d", &month);
    wprintf(L"Digite seu ano de nascimento: ");
    wscanf(L"%d", &year);

    time_t t = time(NULL);
    struct tm userTime = *localtime(&t);

    age = (userTime.tm_year + 1900) - year;

    int currentMonth = userTime.tm_mon + 1;
    if ((currentMonth <= month) || (currentMonth == month && userTime.tm_mday < day)) {
        age -= 1;
    }

    wprintf(L"Sua idade é %d anos.\n", age);
    wprintf(L"Você é %s de idade.\n", (age >= 18) ? "maior" : "menor");

    return 0;
}
