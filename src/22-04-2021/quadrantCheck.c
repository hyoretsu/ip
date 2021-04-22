#include <locale.h>
#include <wchar.h>

// Leia uma coordenada e exiba qual o quadrante associado a este ponto.
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

int main(void) {
    setlocale(LC_ALL, "");
    int x, y;

    wprintf(L"Digite a coordenada, sem parêntesis ou vírgula (X Y): ");
    wscanf(L"%d %d", &x, &y);

    const char *quadrant = quadrantCheck(x, y);

    wprintf(L"O ponto (%d, %d) está %s\n", x, y, quadrant);

    return 0;

}
