#include <locale.h>
#include <string.h>
#include <wchar.h>
#include "./funcs/index.c"

// Contagem de letras
void route1() {
    int counter[26];
    char phrase[131];

    wprintf(L"Escreva uma frase: ");
    wscanf(L"%s", phrase);
    wprintf(L"-----");

    // Não pude checar se realmente funciona porque o código crasha no scanf. Por algum motivo inexistente.
    letterCounter(counter, phrase);

    for (int i = 0; i < 26; i++) {
        // Letra A: ${ocorrências}
        // Letra B: ${ocorrências}
        wprintf(L"Letra %c: %d", (65 + i), counter[i]);
    }

    return;
}
// Agenda
void route2() {
    int i, n, month, year;

    wprintf(L"Quantos compromissos gostaria de cadastrar? ");
    wscanf(L"%d", &n);
    wprintf(L"-----\n");

    struct Appointment {
        char desc[51];
        int time[3];
        int date[3];
    } appointments[n];

    // Cadastrando todos os livros
    for (i = 0; i < n; i++){
        wprintf(L"Insira a data do compromisso (DD/MM/AAAA): ");
        wscanf(L"%d/%d/%d", &appointments[i].date[0], &appointments[i].date[1], &appointments[i].date[2]);

        wprintf(L"Insira o horário do compromisso (HH:MM:SS): ");
        wscanf(L"%d:%d:%d", &appointments[i].time[2], &appointments[i].time[1], &appointments[i].time[0]);

        wprintf(L"Qual foi o compromisso cadastrado?\n");
        wscanf(L"%s", appointments[i].desc);

        wprintf(L"-----\n");
    }

    // Exibindo todos os livros
    for (i = 0; i < n; i++) {
        wprintf(L"%s\n", appointments[i].desc);
        wprintf(
            L"%d:%d:%d de %d/%d/%d\n",
            appointments[i].time[2],
            appointments[i].time[1],
            appointments[i].time[0],
            appointments[i].date[0],
            appointments[i].date[1],
            appointments[i].date[2]
        );
        wprintf(L"-----\n");
    }

    wprintf(L"Você gostaria de checar os compromissos de qual mês? (MM/AAAA)\n");
    wscanf(L"%d/%d\n", &month, &year);

    // Filtrando os livros por mês e ano
    for (i = 0; i < n; i++) {
        if (appointments[i].date[1] == month && appointments[i].date[2] == year) {
            wprintf(
                L"%s, às %d:%d:%d de %d/%d/%d\n",
                appointments[i].desc,
                appointments[i].time[2],
                appointments[i].time[1],
                appointments[i].time[0],
                appointments[i].date[0],
                appointments[i].date[1],
                appointments[i].date[2]
            );
        }
    }

    return;
}
// Livros
void route3() {
    int n;

    wprintf(L"Quantos livros gostaria de cadastrar? ");
    wscanf(L"%d", &n);
    wprintf(L"-----\n");

    struct Book books[n];

    wprintf(L"%lu", sizeof(&books) / sizeof(Book));

    // Cadastra a quantidade de livros desejada
    for (int i = 0; i < n; i++) {
        wprintf(L"Qual o título do livro?\n");
        wscanf(L"%s", &books[i].title);
        wprintf(L"Qual o autor do livro?\n");
        wscanf(L"%s", &books[i].author);
        wprintf(L"Em que ano o livro foi publicado?\n");
        wscanf(L"%d", &books[i].year);
        wprintf(L"-----\n");
    }

    int option, result;

    wprintf(L"Que busca gostaria de fazer?\n");
    wprintf(L"1) Busca pelo título\n");
    wprintf(L"2) Busca por autor\n");
    wprintf(L"3) Busca pelo ano\n");
    wscanf(L"%d", &option);

    char searchString[30];
    int searchNumber;

    switch (option) {
        // Busca pelo título
        case 1:
            wprintf(L"Digite o nome do autor: ");
            wscanf(L"%s", searchString);

            result = findByTitle(books, searchString);

            break;
        // Busca por autor
        case 2:
            wprintf(L"Digite o título do livro: ");
            wscanf(L"%s", searchString);

            result = findByAuthor(books, searchString);

            break;
        // Busca pelo ano
        case 3:
            wprintf(L"Digite o ano de publicação: ");
            wscanf(L"%d", &searchNumber);

            result = findByYear(books, searchNumber);

            break;
    }

    wprintf(L"Houveram %d ocorrências.\n", result);

    return;
}
// Frases
void route4() {
    char phrases[5][41];
    int i;

    // Coleta as frases
    for (i = 0; i < 5; i++) {
        wprintf(L"Digite a %dª frase: ", i);
        wscanf(L"%s", phrases[i]);
    }

    wprintf(L"-----");

    int option;

    wprintf(L"Você deseja:\n");
    wprintf(L"1) buscar um caractére entre as frases?\n");
    wprintf(L"2) encontrar as frases que começam com vogais?\n");
    wscanf(L"%d", &option);

    switch (option) {
        // Pesquisa por um caractére específico
        case 1: {
            char letter[2];

            wprintf(L"Digite um caractére para pesquisar: ");
            wscanf(L"%s", letter);

            wprintf(L"Esse caractére foi encontrado %d vezes", letterSearch(phrases, letter));

            break;
        }
        // Contagem de frases que começam com vogais
        case 2:
            for (i = 0; i < 5; i++) {
                if (isVowel(&phrases[i][0])) {
                    wprintf(L"%s\n", phrases[i]);
                }
            }
            break;
    }

    return;
}

int main(void) {
    setlocale(LC_ALL, "");
    int option;

    wprintf(L"Introdução à Programação 2020.2 - 3ª Prova\n");
    wprintf(L"Qual programa você gostaria de executar?\n");

    wprintf(L"1. Contagem de letras\n");
    wprintf(L"2. Agenda\n");
    wprintf(L"3. Livros\n");
    wprintf(L"4. Frases\n");
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
        default:
            wprintf(L"A opção que você escolheu é inválida. Tente novamente.\n");
            break;
    }

    return 0;
}
