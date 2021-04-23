#include "../headers/sortNumbers.h"

// Leia 3 numeros inteiros e exiba-os em ordem crescente.
void sort(int *numbersArray, int maxIndex) {
    for (int i = 0; i < maxIndex; i++) {
        for (int j = (i + 1); j < maxIndex; j++) {
            if (numbersArray[j] < numbersArray[i]) {
                int oldValue = numbersArray[i];
                numbersArray[i] = numbersArray[j];
                numbersArray[j] = oldValue;
            }
        }
    }
}
