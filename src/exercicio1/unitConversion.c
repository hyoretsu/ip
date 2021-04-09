// Pergunta um valor em metros e imprima o correspondente em decímetros, centímetros e milímetros.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, dm, cm, mm;

    printf("Insira um valor em metros: ");
    scanf("%d", &m);

    if (m == 0) {
        printf("Não há como converter uma quantidade inexistente de metros ou o valor enviado é inválido. (caractére)\n");
        exit(0);
    }

    // Escalabilidade. Por enquanto não é o caso, mas se precisar recuperar esses valores no futuro não precisa refatorar, apesar de fazer a conta direto no printf() consumir menos memória. E fica mais organizado.
    dm = m * 10;
    cm = m * 100;
    mm = m * 1000;

    printf("%i decímetros\n", dm);
    printf("%i centímetros\n", cm);
    printf("%i milimetros\n", mm);

    return 0;
}
