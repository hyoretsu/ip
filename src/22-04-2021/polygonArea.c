#include <locale.h>
#include <math.h>
#include <wchar.h>

// Calcule a área do polígono solicitado
void calcArea(int option, int base, int height, int radius) {
    float area;

    if (option == 1) {
        area = 3.14 * pow(radius, 2);

        wprintf(L"A área do circulo de raio %d é: %.2f\n", radius, area);
    } else {
        area = base * height;
        // triangleArea = (base * height) / 2
        (option == 2) && (area /= 2);

        wprintf(
            L"A área do %s de base %d e altura %d é: %.0f\n",
            (option == 2) ? "triângulo" : "retângulo",
            base,
            height,
            area
        );
    }
}

int main(void) {
    setlocale(LC_ALL, "");
    int option, radius = 0, base = 0, height = 0;

    do {
        wprintf(L"Digite o número do polígono do qual deseja calcular a área.\n");
        wprintf(L"1. Círculo\n");
        wprintf(L"2. Triângulo\n");
        wprintf(L"3. Retângulo\n");
        wscanf(L"%d", &option);
    } while (option < 1 || option > 3);

    switch(option) {
        case 1:
            wprintf(L"Digite o raio do círculo: ");
            wscanf(L"%d", &radius);
            break;
        case 2: case 3:
            wprintf(L"Digite o tamanho da base: ");
            wscanf(L"%d", &base);
            wprintf(L"Digite o tamanho da altura: ");
            wscanf(L"%d", &height);
            break;
    }

    calcArea(option, base, height, radius);

    return 0;
}
