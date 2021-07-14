#include <locale.h>
#include <stdlib.h>
#include <wchar.h>
#include "./funcs/index.c"

// Repetição de verso de música
void route1(void) {
    int quantity;

    wprintf(L"Quantos patinhos você deseja? ");
    wscanf(L"%d", &quantity);
    wprintf(L"-----\n");

    if (quantity == 0) {
        wprintf(L"Nenhum patinho foi passear.");
        exit(0);
    }

    for (int i = 0; i < quantity; i++) {
        int current = quantity - (i + 1);

        wprintf(L"%d patinhos foram passear\n", current + 1);
        wprintf(L"Além das montanhas\n");
        wprintf(L"Para brincar\n");
        wprintf(L"A mamãe gritou: Quá, quá, quá, quá\n");
        current != 0
        ? wprintf(L"Mas só %d patinhos voltaram de lá.\n\n", current)
        : wprintf(L"Mas nenhum patinho voltou de lá.\n\n");
    }

    wprintf(L"A mamãe patinha foi procurar\n");
    wprintf(L"Além das montanhas\n");
    wprintf(L"Na beira do mar\n");
    wprintf(L"A mamãe gritou: Quá, quá, quá, quá\n");
    wprintf(L"E os %d patinhos voltaram de lá.\n", quantity);

}
// 2) Escreva um programa em C que leia e armazene dois valores: um caractere, e
// um valor inteiro. Caso o caractere seja 'P' ou 'p', exiba na tela todos os
// números pares entre 0 e o valor inteiro inserido; caso o caractere seja 'I' ou
// 'i' exiba todos os números ímpares entre 0 e o valor inteiro inserido.
void route2(void) {
    char evenOdd[1];
    int quantity;

    wscanf(L"%s", &evenOdd);
    wscanf(L"%d", &quantity);
}
// 3) Escreva um programa em C que leia e armazene um valor inteiro (n). Faça uma
// estrutura de repetição que solicite ao usuário n números (quantidade inserida
// anteriormente). Depois exiba: a) a média dos números b) o menor número
// inserido c) o maior número inserido d) a quantidade de números pares.
void route3(void) {
    int number;
}
// Tabuada
void route4(void) {
    int number, multTable[10];

    wprintf(L"De qual número você deseja a tabuada? ");
    wscanf(L"%d", &number);
    wprintf(L"-----\n");

    multiplicationTable(number, multTable);

    wprintf(L"A tabuada de 1 a 10 do número %d é: \n", number);
    for (int i = 0; i < 10; i++) {
        wprintf(L"%d x %d = %d\n", number, i + 1, multTable[i]);
    };

}
// Imprimir todos os números com resto 5 quando divididos por 11 entre 50000 e 100000
void route5(void) {
    wprintf(L"[");
    for (int number = 50000; number < 99995; number += 11) {
        wprintf(L"%d, ", number);
    }
    wprintf(L"99995]\n");
}
// Checagem de número primo
void route6(void) {
    int number;

    wprintf(L"Digite um número: ");
    wscanf(L"%d", &number);

    wprintf(L"O número inserido %s primo.\n", isPrime(number) ? "é" : "não é");
}

int main(void) {
    setlocale(LC_ALL, "");
    int option;

    wprintf(L"Introdução à Programação 2020.2 - 2º Exercício\n");
    wprintf(L"Qual função você gostaria de executar?\n");

    wprintf(L"1. Repetição de verso de música\n");
    wprintf(L"2. \n");
    wprintf(L"3. \n");
    wprintf(L"4. Tabuada\n");
    wprintf(L"5. Imprimir todos os números com resto 5 quando divididos por 11 entre 50000 e 100000 \n");
    wprintf(L"6. Checagem de número primo\n");
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
