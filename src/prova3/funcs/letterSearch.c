#include <string.h>
#include "../headers/letterSearch.h"

int letterSearch(char phrases[5][41], char letter[2]) {
    int counter = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 41; j++) {
            // Procura uma letra em cada posição das 5 strings, comparando com a letra dada
            if (strcmp(&phrases[i][j], letter) == 0) {
                counter += 1;
            }
        }
    }

    return counter;
}
