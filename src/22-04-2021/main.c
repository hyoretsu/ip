#include <locale.h>
#include <wchar.h>
#include "./funcs/index.c"

int option;

// Ordenamento de números
void route1() {
    int a, b, c;

    wprintf(L"Digite o primeiro número: ");
    wscanf(L"%d", &a);
    wprintf(L"Digite o segundo número: ");
    wscanf(L"%d", &b);
    wprintf(L"Digite o terceiro número: ");
    wscanf(L"%d", &c);

    int numbersArray[] = {a, b, c};
    sort(numbersArray, sizeof(numbersArray) / 4);

    wprintf(L"[%d, %d, %d]\n", numbersArray[0], numbersArray[1], numbersArray[2]);

    return;
}
// Verificação de quadrante
void route2() {
    int x, y;

    wprintf(L"Digite a coordenada, sem parêntesis ou vírgula (X Y): ");
    wscanf(L"%d %d", &x, &y);

    const char *quadrant = quadrantCheck(x, y);

    wprintf(L"O ponto (%d, %d) está %s\n", x, y, quadrant);

    return ;
}
// Cálculo de área
void route3() {
    int radius = 0, base = 0, height = 0;

    do {
        wprintf(L"Digite o número do polígono do qual deseja calcular a área:\n");
        wprintf(L"1. Círculo\n");
        wprintf(L"2. Triângulo\n");
        wprintf(L"3. Retângulo\n");
        wscanf(L"%d", &option);
    } while (option < 1 || option > 3);

    switch(option) {
        case 1:
            wprintf(L"Digite o raio do círculo: ");
            wscanf(L"%d", &radius);
            break;
        case 2: case 3:
            wprintf(L"Digite o tamanho da base: ");
            wscanf(L"%d", &base);
            wprintf(L"Digite o tamanho da altura: ");
            wscanf(L"%d", &height);
            break;
    }

    float area = calcArea(option, base, height, radius);

    if (option == 1) {
        wprintf(L"A área do circulo de raio %d é: %.2f\n", radius, area);
    } else {
        wprintf(
            L"A área do %s de base %d e altura %d é: %.2f\n",
            (option == 2) ? "triângulo" : "retângulo",
            base,
            height,
            area
        );
    }

    return;
}

int main(void) {
    setlocale(LC_ALL, "");

    wprintf(L"Introdução à Programação 2020.2 - Otimizações da aula de 22/04/2021\n");
    wprintf(L"Qual função você gostaria de executar?\n");

    wprintf(L"1. Ordenamento de números\n");
    wprintf(L"2. Verificação de quadrantes\n");
    wprintf(L"3. Cálculo de área\n");
    wprintf(L"Opção ");
    wscanf(L"%d", &option);

    switch (option) {
        case 1:
            route1();
            break;
        case 2:
            route2();
            break;
        case 3:
            route3();
            break;
        default:
            wprintf(L"A opção que você escolheu é inválida. Tente novamente.\n");
            break;
    }

    return 0;
}
