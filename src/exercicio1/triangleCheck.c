// Receba 3 valores e verifique se eles podem formar um triângulo e de qual tipo ele será. (equilátero, isósceles ou escaleno)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    printf("Insira o primeiro lado do triângulo: ");
    scanf("%d", &a);
    printf("Insira o segundo lado do triângulo: ");
    scanf("%d", &b);
    printf("Insira o terceiro lado do triângulo: ");
    scanf("%d", &c);

    if (a > b + c || b > a + c || c > a + b) {
        printf("Os valores inseridos não formam um triângulo válido.\n");
        exit(0);
    }

    if (a == b == c) {
        printf("O triângulo é equilátero.\n");
    } else if (a == b || b == c || c == a) {
        printf("O triângulo é isósceles.\n");
    } else {
        printf("O triângulo é escaleno.\n");
    }

    return 0;
}
