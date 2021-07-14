#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

// Criação dinâmica de strings
void route1() {
    char *word;
    int i, wordSize;

    wprintf(L"Digite o tamanho da palavra desejada: ");
    wscanf(L"%d", &wordSize);

    wprintf(L"Maloqueiro: %d", wordSize);
    word = (char *)malloc(wordSize + 1);
    word[wordSize + 1] = '\0';

    for (i = 0; i < wordSize; i++) {
        wprintf(L"Digite a %dº letra: ", i + 1);
        fgets(word, 1, stdin);
        sscanf(word, "%c");
    }
    for (i = 0; i < wordSize; i++) {
        wprintf(L"%c", word[i]);
    }
    wprintf(L"\n", word[i]);

    free(word);

    return;
}
//
void route2() {
    return;
}
//
void route3() {
    return;
}
//
void route4() {
    return;
}
//
void route5() {
    return;
}
//
void route6() {
    return;
}

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "");
    int option;

    wprintf(L"Introdução à Programação 2020.2 - 3ª Revisão\n");
    wprintf(L"Qual função você gostaria de executar?\n");

    wprintf(L"1. Criação dinâmica de strings\n");
    wprintf(L"2. \n");
    wprintf(L"3. \n");
    wprintf(L"4. \n");
    wprintf(L"5. \n");
    wprintf(L"6. \n");
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
