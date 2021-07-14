#include "../headers/fahrenheitToCelsius.h"

float fahrenheitToCelsius(int fahrenheit) {
    float celsius;

    celsius = (fahrenheit - 32) * 5 / 9;

    return celsius;
}
