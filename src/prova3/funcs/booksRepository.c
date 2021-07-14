#include <stdlib.h>
#include <string.h>
#include "../headers/booksRepository.h"
#include <stdio.h>

// Devolve quantos livros foram encontrados com determinado título
int findByTitle(struct Book *books, char title[30]) {
    int counter = 0;

    for (int i = 0; i < sizeof(books); i++) {
        if (strcmp(books[i].title, title) == 0) {
            counter += 1;
        }
    }

    return counter;
};

// Devolve quantos livros foram escritos por determinado autor
int findByAuthor(struct Book *books, char author[15]) {
    int counter = 0;

    for (int i = 0; i < sizeof(books); i++) {
        if (strcmp(books[i].author, author) == 0) {
            counter += 1;
        }
    }

    return counter;
};

// Devolve quantos livros foram publicados em determinado
int findByYear(struct Book *books, int year) {
    int counter = 0;

    // Sinceramente não sei como resolver, dá 0 essa divisão (e quando troca pra &books pra tirar o erro)
    for (int i = 0; i < (sizeof(&books) / sizeof(Book)); i++) {
        if (books[i].year == year) {
            counter += 1;
        }
    }

    return counter;
};

