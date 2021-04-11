// Receba 3 valores e verifique se eles podem formar um triângulo e de qual tipo ele será. (equilátero, isósceles ou escaleno)
#include <locale.h>
#include <stdlib.h>
#include <wchar.h>

int main(void) {
    setlocale(LC_ALL, "");
    int a, b, c;

    wprintf(L"Insira o primeiro lado do triângulo: ");
    wscanf(L"%d", &a);
    wprintf(L"Insira o segundo lado do triângulo: ");
    wscanf(L"%d", &b);
    wprintf(L"Insira o terceiro lado do triângulo: ");
    wscanf(L"%d", &c);

    if (a > b + c || b > a + c || c > a + b) {
        wprintf(L"Os valores inseridos não formam um triângulo válido.\n");
        exit(0);
    }

    if (a == b && b == c) {
        wprintf(L"O triângulo é equilátero.\n");
    } else if (a == b || b == c || c == a) {
        wprintf(L"O triângulo é isósceles.\n");
    } else {
        wprintf(L"O triângulo é escaleno.\n");
    }

    return 0;
}
