#include <locale.h>
#include <wchar.h>

// Leia 3 numeros inteiros e exiba-os em ordem crescente.
void sort(int *numbersArray, int maxIndex) {
    int i, j;

    for (i = 0; i < maxIndex; i++) {
        for (j = i + 1; j < maxIndex; j++) {
            if (numbersArray[j] < numbersArray[i]) {
                int oldValue = numbersArray[i];
                numbersArray[i] = numbersArray[j];
                numbersArray[j] = oldValue;
            }
        }
    }
}

int main(void) {
    setlocale(LC_ALL, "");
    int a, b, c;

    wprintf(L"Digite o primeiro número: ");
    wscanf(L"%d", &a);
    wprintf(L"Digite o segundo número: ");
    wscanf(L"%d", &b);
    wprintf(L"Digite o terceiro número: ");
    wscanf(L"%d", &c);

    int numbersArray[] = {a, b, c};
    sort(numbersArray, sizeof(numbersArray) / 4);

    wprintf(L"[%d, %d, %d]\n", numbersArray[0], numbersArray[1], numbersArray[2]);

    return 0;
}
