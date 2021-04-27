#include <stdio.h>
#include <string.h>
#include "../headers/unitConversion.h"

float unitConversion(char *magnitude, int unit, float quantity) {
    if (strcmp(magnitude, "P") == 0) {
        switch (unit) {
            // Libra -> Kg
            case 1:
                printf("%f\n", quantity / 2.205);
                return quantity / 2.205;
            // Kg -> Libra
            case 2:
                printf("%f\n", quantity * 2.205);
                return quantity * 2.205;
            // Onça -> Grama
            case 3:
                return quantity * 28.35;
            // Grama -> Onça
            case 4:
                return quantity / 28.35;
        }
    } else if (strcmp(magnitude, "V") == 0) {
        switch (unit) {
            // Galão -> Litro
            case 1:
                return quantity * 3.785;
            // Litro -> Galão
            case 2:
                return quantity / 3.785;
        }
    } else if (strcmp(magnitude, "C") == 0) {
        switch (unit) {
            // Milha -> Km
            case 1:
                return quantity * 1.609;
            // Km -> Milha
            case 2:
                return quantity / 1.609;
            // Jarda -> Metro
            case 3:
                return quantity / 1.094;
            // Metro -> Jarda
            case 4:
                return quantity * 1.094;
        }
    }

    return 0;
}
