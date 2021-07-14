#include <locale.h>
#include <string.h>
#include <wchar.h>
#include "./funcs/index.c"
#include "./sort.c"

// Meias-vidas até 0,5 g
void route1() {
    float initialMass, results[2];

    wprintf(L"Qual a massa inicial do composto químico, em gramas? ");
    wscanf(L"%f", &initialMass);

    halfLife(initialMass, results);

    wprintf(L"Massa inicial: %.2f g\n", initialMass);
    wprintf(L"Massa final: %.2f g\n", results[0]);
    wprintf(L"Tempo necessário: %.0f s\n", results[1]);

    return;
}
// Progressão Geométrica
void route2() {
    int a1, ratio, evens = 0, progression[10];

    wprintf(L"Qual é o número inicial da sequência? ");
    wscanf(L"%d", &a1);
    wprintf(L"Qual é a razão da PG? ");
    wscanf(L"%d", &ratio);

    geometricProgression(a1, ratio, progression);

    for (int i = 9; i >= 0; i--) {
        if (progression[i] % 2 == 0) {
            evens += 1;
        }
        wprintf(L"%d\n", progression[i]);
    }

    wprintf(L"Nessa sequência há %d %s.\n", evens, (evens > 1) ? "números pares" : "número par");

    return;
}
// Tabuada
void route3() {
    int choice = 0;
    int result[10];

    while (choice < 1 || choice > 10) {
        wprintf(L"De qual número você deseja saber a tabuada? ");
        wscanf(L"%d", &choice);
    }

    multiplicationTable(choice, result);

    for (int i = 1; i <= 10; i++) {
        wprintf(L"%dx%d = %d\n", choice, i, result[i - 1]);
    }

    return;
}
// Inversão de maiúscula/minúscula das vogais de uma palavra
void route4() {
    char word[47];
    wprintf(L"Digite uma palavra: ");
    wscanf(L"%s", word);

    int vowels = invertVowelCase(word);

    wprintf(L"%s\n", word);
    wprintf(L"Um total de %d vogais foram alteradas", vowels);

    return;
}
// Ordenação de palavras
void route5() {
    char words[3][47], option[2];

    wprintf(L"Digite a primeira palavra: ");
    wscanf(L"%s", words[0]);
    wprintf(L"Digite a segunda palavra: ");
    wscanf(L"%s", words[1]);
    wprintf(L"Digite a terceira palavra: ");
    wscanf(L"%s", words[2]);

    wprintf(L"Como você deseja ordenar as palavras?\n");
    wprintf(L"a) em ordem alfabética\n");
	wprintf(L"b) em ordem crescente de quantidade de caracteres\n");
	wprintf(L"c) com seus caracteres em ordem reversa\n");
    wscanf(L"%s", option);

    wordSort(words, option);

    for (int i = 0; i < 3; i++) {
        wprintf(L"%s\n", words[i]);
    }

    return;
}
// Estatísticas sobre médias de alunos
void route6() {
    int i;
    char bestStudent[50], worstStudent[50];
    float totalAverage = 0, averages[5];

    struct Student {
        char name[50];
        float average;
    } students[5];

    for (i = 0; i < 5; i++) {
        wprintf(L"Digite o nome do aluno: ");
        wscanf(L"%s", students[i].name);

        wprintf(L"Digite sua média: ");
        wscanf(L"%f", &averages[i]);

        students[i].average = averages[i];
        totalAverage += averages[i];
    }

    sort(averages, 5);
    // Associa a melhor/pior média com seu aluno
    for (i = 0; i < 5; i++) {
        if (students[i].average == averages[4]) {
            strcpy(bestStudent, students[i].name);
        }

        if (students[i].average == averages[0]) {
            strcpy(worstStudent, students[i].name);
        }
    }

    totalAverage /= 5;

    wprintf(L"O aluno com a melhor média foi %s, com %.1f de média\n", bestStudent, averages[4]);
    wprintf(L"O aluno com a pior média foi %s, com %.1f de média\n", worstStudent, averages[0]);
    wprintf(L"A média geral da turma foi: %.2f\n", totalAverage);

    return;
}

int main(void) {
    setlocale(LC_ALL, "");
    int option;

    wprintf(L"Introdução à Programação 2020.2 - 2ª Prova\n");
    wprintf(L"Qual função você gostaria de executar?\n");

    wprintf(L"1. Meias-vidas até 0,5 g\n");
    wprintf(L"2. Progressão Geométrica\n");
    wprintf(L"3. Tabuada\n");
    wprintf(L"4. Inversão de maiúscula/minúscula das vogais de uma palavra\n");
    wprintf(L"5. Ordenação de palavras\n");
    wprintf(L"6. Estatísticas sobre médias de alunos\n");
    wprintf(L"Opção ");
    wscanf(L"%d", &option);
    wprintf(L"-----\n");

    switch (option) {
        case 1:
            route1();
            break;
        case 2:
            route2();
            break;
        case 3:
            route3();
            break;
        case 4:
            route4();
            break;
        case 5:
            route5();
            break;
        case 6:
            route6();
            break;
        default:
            wprintf(L"A opção que você escolheu é inválida. Tente novamente.\n");
            break;
    }

    return 0;
}
