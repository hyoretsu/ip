#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include "./funcs/productsRepository.c"

int terminate = 0;

// Cadastrar produto
void route1() {
    for (int i = 0; i < 10; i++) {
        char pqp[100];

        if (products[i].id == 0) {
            wprintf(L"Digite o nome do produto: ");
            wscanf(L"%s[^\n]", products[i].name);
            wprintf(L"Digite uma descrição para o produto: ");
            wscanf(L"%s[^\n]", products[i].description);
            wprintf(L"Digite o preço do produto, com um ponto para demarcar os centavos: R$");
            wscanf(L"%.f", products[i].price);

            products[i].id = i + 1;

            return;
        }
    }

    wprintf(L"Desculpe, mas o máximo de produtos já está cadastrado.\n");

    return;
}

// Listar produtos cadastrados
void route2() {
    for (int i = 0; i < 10; i++) {
        if (products[i].id != 0) {
            wprintf(L"Nome: %s\n", products[i].name);
            wprintf(L"Descrição: %s\n", products[i].description);
            wprintf(L"Preço: %f\n", products[i].price);
            wprintf(L"Código: %d\n", products[i].id);

            if (i < 9) {
                wprintf(L"-----\n");
            }
        } else {
            return;
        }
    }

    return;
}

// Consultar preço e descrição de um produto
void route3() {
    int id;

    wprintf(L"Qual é o código do produto que você deseja consultar?");
    wscanf(L"%d", &id);

    // findById(id);

    wprintf(L"Preço: %d", 1);

    return;
}

// Consultar média de preço dos produtos
void route4() {
    return;
}

// Sair
void route5() {
    terminate = 1;

    return;
}

int main(void) {
    setlocale(LC_ALL, "");
    char option;

    wprintf(L"Introdução à Programação 2020.2 - 3ª Revisão\n");

    // while (terminate == 0) {
        wprintf(L"a) Cadastrar produto\n");
        wprintf(L"b) Listar produtos cadastrados\n");
        wprintf(L"c) Consultar preço e descrição de um produto\n");
        wprintf(L"d) Consultar média de preço dos produtos\n");
        wprintf(L"e) Sair\n");
        wscanf(L"%c", &option);
        wprintf(L"-----\n");

        switch (option) {
            case 'a':
                route1();
                break;
            case 'b':
                route2();
                break;
            case 'c':
                route3();
                break;
            case 'd':
                route4();
                break;
            case 'e':
                route5();
                break;
        }

        wprintf(L"---------------\n");
    // }

    return 0;
}
