#include <math.h>
#include "../headers/polygonArea.h"

float calcArea(int option, int base, int height, int radius) {
    float area;

    if (option == 1) {
        // circleArea = pi * r^2
        area = 3.14 * pow(radius, 2);
    } else {
        // rectangleArea = base * height
        area = base * height;
        // triangleArea = (base * height) / 2
        (option == 2) && (area /= 2);
    }

    return area;
}
