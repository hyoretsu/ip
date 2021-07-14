#include <math.h>
#include "../headers/geometricProgression.h"

void geometricProgression(int a1, int ratio, int *progression) {
    for (int i = 0; i < (int)(sizeof(progression) / 4); i++) {
        progression[i] = a1 * pow(ratio, i);
    }
}
