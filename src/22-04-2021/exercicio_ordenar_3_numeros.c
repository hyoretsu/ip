#include <stdio.h>

    /*
        Faca um programa em C que leia 3 numeros inteiros e exiba-os de forma ordenada.

    */

int main(void) {

    int numero1, numero2, numero3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);

    if ((numero1 >= numero2) && (numero1 >= numero3)) { //se verdade, numero1 é o maior
        if (numero2 >= numero3) {
            printf("%d %d %d", numero3, numero2, numero1);
        } else {
            printf("%d %d %d", numero2, numero3, numero1);
        }
    } else { //numero1 nao é o maior
        if ((numero2 >= numero1) && (numero2 >= numero3)) { //se verdade, numero2 é o maior
            if (numero1 >= numero3) {
                printf("%d %d %d", numero3, numero1, numero2);
            }
            else {
                printf("%d %d %d", numero1, numero3, numero2);
            }
        } else { //numero2 nao é o maior (como o numero1 tambem nao, por eliminacao, é o numero3)
            if (numero1 >= numero2) {
                printf("%d %d %d", numero2, numero1, numero3);
            } else {
                printf("%d %d %d", numero1, numero2, numero3);
            }
        }
    }

    return 0;
}
