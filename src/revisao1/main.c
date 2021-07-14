#include <locale.h>
#include <wchar.h>
#include "./funcs/index.c"

// Encontrar maior e menor número de uma sequência
void route1() {
    float *numbersArray;

    wprintf(L"Digite 4 valores separados com um espaço: ");
    wscanf(L"%f %f %f %f", &numbersArray[0], &numbersArray[1], &numbersArray[2], &numbersArray[3]);

    sort(numbersArray, sizeof(numbersArray) / 4);

    wprintf(L"O menor número desta sequência é %.2f e o maior é %.2f\n", numbersArray[0], numbersArray[3]);

    return;
}
// Conversão de temperatura em Fahrenheit para Celsius
void route2() {
    int fahrenheit, celsius;

    wprintf(L"Digite uma temperatura em Fahrenheit: ");
    wscanf(L"%d", &fahrenheit);

    celsius = fahrenheitToCelsius(fahrenheit);

    if (celsius < 0) {
        wprintf(L"Clima congelante\n");
    } else if (celsius >= 0 && celsius <= 10) {
        wprintf(L"Clima muito frio\n");
    } else if (celsius >= 10 && celsius <= 19) {
        wprintf(L"Clima frio\n");
    } else if (celsius >= 20 && celsius <= 28) {
        wprintf(L"Clima normal\n");
    } else if (celsius >= 29 && celsius <= 40) {
        wprintf(L"Clima quente\n");
    } else {
        wprintf(L"Clima muito quente\n");
    }

    return;
}
// 3) Durante uma crise hídrica em uma cidade fictícia, as pessoas começaram a construir reservatórios para armazenar água em suas propriedades. Faça um programa em linguagem C que auxilie os utilizadores do reservatório a controlarem seu consumo. Obtenha do teclado as dimensões de um reservatório (altura, largura e comprimento, em centímetros) e o consumo médio diário dos utilizadores do reservatório (em litros/dia).
// Assuma que o reservatório esteja cheio, tenha formato cúbico e informe:
// (a) A capacidade total do reservatório, em litros;
// (b) A autonomia do reservatório, em dias;
// (c) A classificação do consumo, de acordo com a quantidade de dias de autonomia: Consumo elevado, se a autonomia for menor que 2 dias; Consumo moderado, se a autonomia estiver entre 2 e 7 dias; Consumo reduzido, se a autonomia maior que 7 dias.
// Obs.: Considere que cada litro equivale a 1000 cm3 ou 1 dm3.
void route3() {

    return;
}
// Identificação de polígono
void route4() {
    int sides;

    wprintf(L"Quantos lados tem o seu polígono? (Máximo de 8)\n");
    wscanf(L"%d", &sides);

    const char *polygon = polygonCheck(sides);

    wprintf(L"Essa quantidade de lados pertence a um %s.\n", polygon);

    return;
}
// 5) Faça um programa em C eia os valores inteiros para dia, mês e ano de uma data e depois exiba a data como texto. Verifique também se a data é válida. Use switch/case. Ex. caso os valores 01 , 01 e 2021 sejam inseridos, será exibido o texto "01 de Janeiro de 2021"; caso os valores 33 , 20 e 2021 sejam inseridos, será exibido o texto "Data inválida".
void route5() {

    return;
}
// Consumo de combustível
// 6) Faça um programa em C que leia um valor para um percurso em quilômetros, um valor (caractere) que defina o tipo de carro a ser usado e calcule o consumo  de combustível, sabendo- se  que  o   carro  do   tipo A faz  12 Km  com um  litro de gasolina, o tipo B faz 9 Km, o tipo C faz 8 Km por litro e o tipo D faz 5 Km com um litro. Utilize um switch-case para decidir o tipo de carro.
void route6() {
    int km;
    char *carType;

    wprintf(L"Qual é o tamanho do percurso a ser percorrido?");
    wscanf(L"%d", &km);
    wprintf(L"Qual é o tipo de carro que está sendo utilizado?");
    wscanf(L"%s", &carType);

    return;
}

int main(void) {
    setlocale(LC_ALL, "");
    int option;

    wprintf(L"Introdução à Programação 2020.2 - Revisão para a 1ª prova\n");
    wprintf(L"Qual programa você gostaria de executar?\n");

    wprintf(L"1. Encontrar maior e menor número de uma sequência\n");
    wprintf(L"2. Conversão de temperatura em Fahrenheit para Celsius\n");
    wprintf(L"3. \n");
    wprintf(L"4. Identificação de polígono\n");
    wprintf(L"5. \n");
    wprintf(L"6. Consumo de combustível\n");
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
        case 6:
            route6();
            break;
        default:
            wprintf(L"A opção que você escolheu é inválida. Tente novamente.\n");
            break;
    }

    return 0;
}
