// Tendo como entrada dois pontos quaisquer do plano P(x1,y1) e Q(x2,y2), imprima a distância entre eles.
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int distance, x1, x2, y1, y2;

    wprintf(L"Digite a primeira coordenada, sem vírgula: ");
    scanf("%d %d", &x1, &x2);
    wprintf(L"Digite a primeira coordenada, sem vírgula: ");
    scanf("%d %d", &y1, &y2);

    // URI Online Judge #1015
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    wprintf(L"A distância entre os pontos é de %d\n", distance);
}
