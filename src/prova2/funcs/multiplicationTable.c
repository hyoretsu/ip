#include "../headers/multiplicationTable.h"

void multiplicationTable(int number, int results[10]) {
    int i, tabuada[10][10];

    // Calcula a tabuada
    for (i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            tabuada[i - 1][j - 1] = i * j;
        }
    }

    // Copia a tabuada desejada para o array enviado
    for (i = 0; i < 10; i++) {
        results[i] = tabuada[number - 1][i];
    }

    return;
}
