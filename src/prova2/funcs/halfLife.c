#include "../headers/halfLife.h"

#define meiaVidaDoMaterial 50

void halfLife(float initialMass, float results[2]) {
    int repetitions = 0;
    float finalMass = initialMass;

    while (finalMass >= 0.5) {
        finalMass /= 2;
        repetitions += 1;
    }

    results[0] = finalMass;
    results[1] = repetitions * meiaVidaDoMaterial;

    return;
}
