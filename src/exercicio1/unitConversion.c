// Pergunta um valor em metros e imprima o correspondente em decímetros, centímetros e milímetros.
#include <locale.h>
#include <stdlib.h>
#include <wchar.h>

int main(void) {
    setlocale(LC_ALL, "");
    int m, dm, cm, mm;

    wprintf(L"Insira um valor em metros: ");
    wscanf(L"%d", &m);

    if (m == 0) {
        wprintf(L"Não há como converter uma quantidade inexistente de metros ou o valor enviado é inválido. (caractére)\n");
        exit(0);
    }

    // Escalabilidade. Por enquanto não é o caso, mas se precisar recuperar esses valores no futuro não precisa refatorar, apesar de fazer a conta direto no printf() consumir menos memória. E fica mais organizado.
    dm = m * 10;
    cm = m * 100;
    mm = m * 1000;

    wprintf(L"%i decímetros\n", dm);
    wprintf(L"%i centímetros\n", cm);
    wprintf(L"%i milimetros\n", mm);

    return 0;
}
