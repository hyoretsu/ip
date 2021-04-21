#include "../headers/triangleCheck.h"

const char * triangleCheck(int a, int b, int c) {
    char const *result;

    if (a >= b + c || b >= a + c || c >= a + b) {
        result = "Os valores inseridos não formam um triângulo válido.\n";

        return result;
    }

    if (a == b && b == c) {
        result = "O triângulo é equilátero.\n";

        return result;
    } else if (a == b || b == c || c == a) {
        result = "O triângulo é isósceles.\n";

        return result;
    } else {
        result = "O triângulo é escaleno.\n";

        return result;
    }
}
