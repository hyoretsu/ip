#include <string.h>
#include "../headers/wordSort.h"

// Customização de funções reutilizáveis da 1ª prova pra ordenar um array
void sortAlphabetic(char words[3][47], int maxIndex) {
    for (int i = 0; i < maxIndex; i++) {
        for (int j = (i + 1); j < maxIndex; j++) {
            // Se for maior que 0, tá em ordem decrescente no alfabeto. Caso contrário, já tá em ordem crescente
            if (strcmp(words[i], words[j]) > 0) {
                char oldValue[47];
                strcpy(oldValue, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], oldValue);
            }
        }
    }

    return;
}
void sortSize(char words[3][47], int maxIndex) {
    for (int i = 0; i < maxIndex; i++) {
        for (int j = (i + 1); j < maxIndex; j++) {
            if (strlen(words[j]) < strlen(words[i])) {
                char oldValue[47];
                strcpy(oldValue, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], oldValue);
            }
        }
    }

    return;
}
void reverse(char words[3][47], int maxIndex) {
    for (int i = 0; i < maxIndex; i++) {
        int wordLimit = strlen(words[i]) - 1;
        for (int j = 0; j <= wordLimit; j++) {
            char oldValue = words[i][j];
            words[i][wordLimit] = words[i][j];
            words[i][j] = oldValue;
        }
    }

    return;
}

void wordSort(char words[3][47], char option[2]) {
    if (strcmp(option, "a") == 0) {
        sortAlphabetic(words, 3);
        return;
    }
    switch (*option) {
        // Ordem alfabética
        // case 'a':
        //     sortAlphabetic(words, 3);
        //     return;
        // Ordem crescente de quantidade de caracteres
        case 'b':
            sortSize(words, 3);
            return;
        // Inversão de caractéres
        case 'c':
            reverse(words, 3);
            return;
    }
}
