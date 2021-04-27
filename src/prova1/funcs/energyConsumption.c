#include <math.h>
#include <string.h>
#include "../headers/energyConsumption.h"

int energyConsumption(char *roomType, float volume, int lampPower) {
    float powerNeeded;

    // Multiplicação da taxa de consumo pelo volume do cômodo
    if (strcmp(roomType, "A")) {
        powerNeeded = 8.5 * volume;
    } else if (strcmp(roomType, "B")) {
        powerNeeded = 11.3 * volume;
    } else if (strcmp(roomType, "C")) {
        powerNeeded = 15 * volume;
    } else if (strcmp(roomType, "D")) {
        powerNeeded = 18.8 * volume;
    } else if (strcmp(roomType, "E")) {
        powerNeeded = 22 * volume;
    } else {
        return 0;
    }

    // Qualquer fração de lâmpada precisa de 1 a mais
    return (int)(ceil(powerNeeded / lampPower));
};
