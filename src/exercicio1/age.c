// Leia o dia, o mês e o ano de nascimento do usuário e o dia, o mês e ano atuais. (automaticamente) Exiba na tela a idade do usuário e se é maior de idade.
#include <locale.h>
#include <stdio.h>
#include <time.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int age, day, month, year;

    wprintf(L"Digite seu dia de nascimento: ");
    scanf("%d", &day);
    wprintf(L"Digite seu mês de nascimento: ");
    scanf("%d", &month);
    wprintf(L"Digite seu ano de nascimento: ");
    scanf("%d", &year);

    time_t t = time(NULL);
    struct tm userTime = *localtime(&t);

    age = (userTime.tm_year + 1900) - year;
    if (userTime.tm_mday < day && userTime.tm_mon + 1 <= month) {
        age -= 1;
    }

    wprintf(L"Sua idade é %d anos.\n", age);
    if (age >= 18) {
        wprintf(L"Você é maior de idade.\n");
    } else {
        wprintf(L"Você é menor de idade.\n");
    }
}
