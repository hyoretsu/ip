#include <stdio.h>

/*
    Faca um programa em C que leia as coordenadas X e Y de um ponto no plano cartesiano (2d)

    Exiba qual o quadrante associado a este ponto


     2 (-, +)   __|__  (+, +) 1
     3 (-, -)     |    (+, -) 4

*/

int main(void) {

    int coordX, coordY;

    printf("Digite a coordenada x: ");
    scanf("%d", &coordX);

    printf("Digite a coordenada y: ");
    scanf("%d", &coordY);

    if (coordX>0) {
        if (coordY>0) {
            printf("(%d, %d) - primeiro quadrante", coordX, coordY);
        } else {
            if (coordY != 0)
                printf("(%d, %d) - quarto quadrante", coordX, coordY);
            else
                printf("(%d, %d) - ponto no eixo y", coordX, coordY);
        }
    } else {
        if (coordY>0) {
            if (coordY != 0)
                if (coordX == 0) {
                    printf("(%d, %d) - ponto no eixo x", coordX, coordY);
                } else
                    printf("(%d, %d) - segundo quadrante", coordX, coordY);

        } else {
            if (coordY != 0)
                if (coordX == 0) {
                    printf("(%d, %d) - ponto no eixo x", coordX, coordY);
                } else
                    printf("(%d, %d) - quarto quadrante", coordX, coordY);
            else {
                if (coordX == 0) {
                    printf("(%d, %d) - ponto na origem", coordX, coordY);
                } else {
                    printf("(%d, %d) - ponto no eixo y", coordX, coordY);
                }
            }
        }
    }

    return 0;
}
