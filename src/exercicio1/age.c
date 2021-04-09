// Leia o dia, o mês e o ano de nascimento do usuário e o dia, o mês e ano atuais. (automaticamente) Exiba na tela a idade do usuário e se é maior de idade.
#include <stdio.h>
#include <time.h>

int main() {
    int age, day, month, year;

    printf("Digite seu dia de nascimento: ");
    scanf("%d", &day);
    printf("Digite seu mês de nascimento: ");
    scanf("%d", &month);
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &year);

    time_t t = time(NULL);
    struct tm userTime = *localtime(&t);

    age = (userTime.tm_year + 1900) - year;
    if (userTime.tm_mday < day && userTime.tm_mon + 1 <= month) {
        age -= 1;
    }

    printf("Sua idade é %d anos.\n", age);
    if (age >= 18) {
        printf("Você é maior de idade.\n");
    } else {
        printf("Você é menor de idade.\n");
    }
}
