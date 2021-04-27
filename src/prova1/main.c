#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include "./funcs/index.c"

// Ordenamento de números e cálculo da média
void route1() {
    int numbersArray[4];

    wprintf(L"Digite o primeiro número: ");
    wscanf(L"%d", &numbersArray[0]);
    wprintf(L"Digite o segundo número: ");
    wscanf(L"%d", &numbersArray[1]);
    wprintf(L"Digite o terceiro número: ");
    wscanf(L"%d", &numbersArray[2]);
    wprintf(L"Digite o quarto número: ");
    wscanf(L"%d", &numbersArray[3]);

    int arraySize = sizeof(numbersArray) / 4;

    // sizeof() retorna o tamanho de um array em bytes. Cada int/float tem 4 bytes
    sort(numbersArray, arraySize);

    float average = 0;
    for (int i = 0; i < arraySize; i++) {
        average += numbersArray[i];
    }

    average /= arraySize;

    wprintf(L"O maior número é %d, o menor é %d e a média entre eles é %.2f\n", numbersArray[3], numbersArray[0], average);

    return;
}
// Simulação de empréstimo bancário
void route2() {
    float salary, loan, portion;
    char *analysisArray[2];

    do {
    wprintf(L"Digite o valor de seu salário: R$ ");
    wscanf(L"%f", &salary);
    wprintf(L"Digite o valor de seu empréstimo: R$ ");
    wscanf(L"%f", &loan);
    wprintf(L"Digite o valor de cada prestação: R$ ");
    wscanf(L"%f", &portion);
    } while (salary <= 0 || loan <= 0 || portion <= 0);

    loanCheck(salary, loan, portion, analysisArray);

    wprintf(L"%s. %s\n", analysisArray[0], analysisArray[1]);

    return;
}
// Cálculo de lâmpadas para um cômodo
void route3() {
    char roomType[1];
    float volume, height, width, depth;
    int lampPower;

    wprintf(L"Digite a letra correspondente ao tipo do seu cômodo: ");
    wscanf(L"%s", &roomType);
    wprintf(L"Digite as medidas do cômodo (7x10x12): ");
    wscanf(L"%fx%fx%f", &height, &width, &depth);
    wprintf(L"Digite a potência da sua lâmpada: ");
    wscanf(L"%d", &lampPower);

    // Medidas inválidas
    if (height == 0 || width <= 0 || depth <= 0 || lampPower <= 0) {
        wprintf(L"Alguma das medidas digitadas está errada.");
        exit(0);
    }

    volume = height * width * depth;
    int lampsNeeded = energyConsumption(roomType, volume, lampPower);

    // Não existe valor para cômodos que não são A/B/C/D/E
    (lampsNeeded == 0) && wprintf(L"O tipo do cômodo inserido é inválido.");

    wprintf(L"Você precisará de %d lâmpadas\n", lampsNeeded);

    return;
}
// Conversão de medidas
void route4() {
    char magnitude[1];
    int unit;
    float quantity;

    wprintf(L"Digite a incial da grandeza desejada:\n");
    wprintf(L"Peso\n");
    wprintf(L"Volume\n");
    wprintf(L"Comprimento\n");
    wscanf(L"%s", &magnitude);
    wprintf(L"-----\n");

    // Se a grandeza estiver errada
    if (strcmp(magnitude, "P") != 0 && strcmp(magnitude, "V") != 0 && strcmp(magnitude, "C") != 0) {
        wprintf(L"A grandeza escolhida é inválida. Tente novamente.\n");
    }

    wprintf(L"Qual tipo de conversão você gostaria de realizar?\n");
    if (strcmp(magnitude, "P") == 0) {
        wprintf(L"1) Libra -> Kg\n");
        wprintf(L"2) Kg -> Libra\n");
        wprintf(L"3) Onça -> Grama\n");
        wprintf(L"4) Grama -> Onça\n");
    } else if (strcmp(magnitude, "V") == 0) {
        wprintf(L"1) Galão -> Litro\n");
        wprintf(L"2) Litro -> Galão\n");
    } else if (strcmp(magnitude, "C") == 0) {
        wprintf(L"1) Milha -> Km\n");
        wprintf(L"2) Km -> Milha\n");
        wprintf(L"3) Jarda -> Metro\n");
        wprintf(L"4) Metro -> Jarda\n");
    }
    wscanf(L"%d", &unit);
    wprintf(L"-----\n");

    // Se a conversão desejada estiver errada
    if (unit < 1 || unit > 4) {
        wprintf(L"A unidade escolhida é inválida. Tente novamente.\n");
    }

    wprintf(L"Digite a quantidade existente: ");
    wscanf(L"%f", &quantity);

    float result = unitConversion(magnitude, unit, quantity);

    wprintf(L"%f\n", result);

    return;
}

int main(void) {
    setlocale(LC_ALL, "");
    int option;

    wprintf(L"Introdução à Programação 2020.2 - 1ª Prova\n");
    wprintf(L"Qual função você gostaria de executar?\n");

    wprintf(L"1. Ordenamento de números e cálculo da média\n");
    wprintf(L"2. Simulação de empréstimo bancário\n");
    wprintf(L"3. Cálculo de lâmpadas para um cômodo\n");
    wprintf(L"4. Conversão de medidas\n");
    wprintf(L"Opção ");
    wscanf(L"%d", &option);
    wprintf(L"-----\n");

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
        default:
            wprintf(L"A opção que você escolheu é inválida. Tente novamente.\n");
            break;
    }

    return 0;
}
