#include "../headers/quadrantCheck.h"

const char* quadrantCheck(int x, int y) {
    if (x == 0 && y == 0) {
        return "na origem";
    } else if (x == 0) {
        return "no eixo Y";
    } else if (y == 0) {
        return "no eixo X";
    } else if (x > 0) {
        if (y > 0) {
            return "no quadrante I";
        } else {
            return "no quadrante IV";
        }
    } else {
        if (y > 0) {
            return "no quadrante II";
        } else {
            return "no quadrante III";
        }
    }
}
