// Solicite 2 números e informe:
// 1. A soma dos números;
// 2. O produto do primeiro número pelo quadrado do segundo;
// 3. O quadrado do primeiro número menos o quadrado do segundo;
// 4. A raiz quadrada da soma dos quadrados;
// 5. O seno da diferença do primeiro número pelo segundo.
#include <math.h>
#include <stdio.h>

int main() {
    int a, b;

    printf("Insira o primeiro número: ");
    scanf("%d", &a);
    printf("Insira o segundo número: ");
    scanf("%d", &b);

    printf("Soma: %i\n", a + b);
    printf("Produto do primeiro pelo quadrado do segundo: %i\n", a * (int)(pow(b, 2)));
    printf("Quadrado - quadrado: %i\n", (int)(pow(a, 2) - pow(b, 2)));
    printf("Raiz da soma dos quadrados: %.2f\n", sqrt(pow(a, 2) + pow(b, 2)));
    printf("Seno da diferença: %.2f\n", sin(a - b));

    return 0;
}
