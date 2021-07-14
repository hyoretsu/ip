#include "../headers/sortNumbers.h"

const char* polygonCheck(int sides) {
    switch (sides) {
        case 3:
            return "triângulo";
        case 4:
            return "quadrado ou retângulo";
        case 5:
            return "pentágono";
        case 6:
            return "hexágono";
        case 7:
            return "heptágono";
        case 8:
            return "octógono";
        default:
            return "Polígono inexistente";
    }
}
