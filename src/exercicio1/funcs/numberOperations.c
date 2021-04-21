#include <math.h>
#include "../headers/numberOperations.h"

void numberOperations(int a, int b, double *array) {
    array[0] = a + b;
    array[1] = a * pow(b, 2);
    array[2] = pow(a, 2) - pow(b, 2);
    array[3] = sqrt(pow(a, 2) + pow(b, 2));
    array[4] = sin(a - b);

    return;
}
