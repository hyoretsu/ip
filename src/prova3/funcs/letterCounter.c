#include "../headers/letterCounter.h"

// Conta cada letra do alfabeto em uma determinada frase
void letterCounter(int letterCount[26], char* phrase) {
    for (int i = 0; i < 26; i++) {
        for (int j = 0; i < sizeof(phrase); j++) {
            // Checando qual letra do alfabeto é através da tabela ASCII
            if (phrase[j] == (65 + i) || phrase[j] == (97 + i)) {
                letterCount[i] += 1;
            }
        }
    }

    return;
}
