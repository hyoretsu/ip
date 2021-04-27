#include "../headers/sortNumbers.h"

void sort(int *numbersArray, int maxIndex) {
    // Iteramos o array
    for (int i = 0; i < maxIndex; i++) {
        // Iteramos o restante do array
        for (int j = (i + 1); j < maxIndex; j++) {
            // Caso o novo número seja maior
            if (numbersArray[j] < numbersArray[i]) {
                // Substitua-o pelo primeiro (menor) índice
                int oldValue = numbersArray[i];
                numbersArray[i] = numbersArray[j];
                numbersArray[j] = oldValue;
            }
        }
    }

    return;
}

// ---------Comentário gigante sem relação alguma com o código escrito e que deveria ser abstraído para um arquivo separado---------
// Compilar é o processo de conversão de programação de alto nível para baixo nível, que pode ser executado pelo processador
// Compilei através do Clang no WSL, mas GCC/Windows também funciona. Também é possível usar o CMake
// Criei testes unitários com a lib Check, apenas compilo o test.c (E rodo manualmente no caso da questão 4, os testes estavam complicados de fazer e não tinha tempo livre pra debuggar)
