#include <math.h>
#include "../headers/geometricProgression.h"

void geometricProgression(int a1, int ratio, int *progression) {
    for (int i = 0; i < 10; i++) {
        progression[i] = a1 * pow(ratio, i);
    }
}
