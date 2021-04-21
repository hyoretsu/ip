#include <math.h>
#include "../headers/unitConversion.h"

void unitConversion(int m, int *array) {
    for (int i = 0; i < 3; i++) {
        array[i] = (int)(m * pow(10, i + 1));
    }

    return;
}
