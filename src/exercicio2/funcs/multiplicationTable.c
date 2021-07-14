#include "../headers/multiplicationTable.h"

void multiplicationTable(int number, int multTable[10]) {
    for (int i = 0; i < 10; i++) {
        multTable[i] = number * (i + 1);
    };
};
