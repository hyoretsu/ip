#include <stdio.h>
#include <math.h>
    /*
        Faca um programa que pergunte ao usuario em um menu qual poligono ele deseja calcular a area.
        Apos a escolha, solicite os parametros adequados e calcule a area solicitada.
        Usar: Circulo, Triangulo e Retangulo
    */


int main(void) {

    int escPoligono;

ponto_escolha:
    printf("Digite o numero do poligono que deseja calcular a area. ");
    printf("\n(1 - Circulo\t2 - Triangulo\t3 - Retangulo)\n ");
    printf("\nOpcao: ");
    scanf("%d", &escPoligono);

    switch(escPoligono) {
        case 1: {
            float raioCirculo;
            printf("\nOpcao escolhida: circulo\n");
            printf("Digite o raio do circulo: ");
            scanf("%f", &raioCirculo);
            printf("\nArea do circulo de raio %.2f: %.2f", raioCirculo, (3.14 * pow(raioCirculo,2)));
            break;
        }
        case 2: {
            float baseTriangulo, alturaTriangulo;
            printf("\nOpcao escolhida: triangulo\n");
            printf("Digite a base do triangulo: ");
            scanf("%f", &baseTriangulo);
            printf("Digite a altura do triangulo: ");
            scanf("%f", &alturaTriangulo);
            printf("\nArea do triangulo de base %.2f e altura %.2f: %.2f",
                    baseTriangulo, alturaTriangulo, (baseTriangulo*alturaTriangulo)/2);
            break;
        }
        case 3: {
            float baseRetangulo, alturaRetangulo;
            printf("\nOpcao escolhida: retangulo\n");
            printf("Digite a base do retangulo: ");
            scanf("%f", &baseRetangulo);
            printf("Digite a altura do retangulo: ");
            scanf("%f", &alturaRetangulo);
            printf("\nArea do retangulo de base %.2f e altura %.2f: %.2f",
                    baseRetangulo, alturaRetangulo, (baseRetangulo*alturaRetangulo));
            break;
        }

        default: {
            printf("Opcao invalida!\n");
            goto ponto_escolha;
        }
    }

    return 0;
}
