#include <locale.h>
#include <wchar.h>
#include "./funcs/index.c"

// Conversão de medida em metros
void route1() {
    int m;

    wprintf(L"Insira um valor em metros: ");
    wscanf(L"%d", &m);

    int values[3];
    unitConversion(m, values);

    wprintf(L"%i decímetros\n", values[0]);
    wprintf(L"%i centímetros\n", values[1]);
    wprintf(L"%i milimetros\n", values[2]);
}
// Operações com números
void route2() {
    int a, b;

    wprintf(L"Insira o primeiro número: ");
    wscanf(L"%d", &a);
    wprintf(L"Insira o segundo número: ");
    wscanf(L"%d", &b);

    double results[5];
    numberOperations(a, b, results);

    wprintf(L"Soma: %i\n", (int)results[0]);
    wprintf(L"Produto do primeiro pelo quadrado do segundo: %i\n", (int)results[1]);
    wprintf(L"Quadrado - quadrado: %i\n", (int)results[2]);
    wprintf(L"Raiz da soma dos quadrados: %.2lf\n", results[3]);
    wprintf(L"Seno da diferença: %.2lf\n", results[4]);
}
// Distância entre 2 pontos
void route3() {
    int x1, y1, x2, y2;

    wprintf(L"Digite a primeira coordenada, sem parêntesis ou vírgula (X Y): ");
    wscanf(L"%d %d", &x1, &y1);
    wprintf(L"Digite a segunda coordenada, sem parêntesis ou vírgula (X Y): ");
    wscanf(L"%d %d", &x2, &y2);

    float distance = distanceCalc(x1, y1, x2, y2);

    wprintf(L"A distância entre os pontos é de %.2f\n", distance);
}
// Cálculo de idade
void route4() {
    int day, month, year;

    wprintf(L"Digite seu dia de nascimento: ");
    wscanf(L"%d", &day);
    wprintf(L"Digite seu mês de nascimento: ");
    wscanf(L"%d", &month);
    wprintf(L"Digite seu ano de nascimento: ");
    wscanf(L"%d", &year);

    int age = ageCalc(day, month, year);

    wprintf(L"Sua idade é %d anos. ", age);
    wprintf(L"Você é %s de idade.\n", (age >= 18) ? "maior" : "menor");
}
// Checagem de triângulo
void route5() {
    int a, b, c;

    wprintf(L"Insira o primeiro lado do triângulo: ");
    wscanf(L"%d", &a);
    wprintf(L"Insira o segundo lado do triângulo: ");
    wscanf(L"%d", &b);
    wprintf(L"Insira o terceiro lado do triângulo: ");
    wscanf(L"%d", &c);

    wprintf(L"%s", triangleCheck(a, b, c));
}

int main(void) {
    setlocale(LC_ALL, "");
    int option;

    wprintf(L"Introdução à Programação 2020.2 - Exercício 1\n");
    wprintf(L"Qual função você gostaria de executar?\n");

    wprintf(L"1. Conversão de medida em metros\n");
    wprintf(L"2. Operações com números\n");
    wprintf(L"3. Distância entre 2 pontos\n");
    wprintf(L"4. Cálculo de idade\n");
    wprintf(L"5. Checagem de triângulo\n");
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
        case 4:
            route4();
            break;
        case 5:
            route5();
            break;
        default:
            wprintf(L"A opção que você escolheu é inválida. Tente novamente.\n");
            break;
    }

    return 0;
}
