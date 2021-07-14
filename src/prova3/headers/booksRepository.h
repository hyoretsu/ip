#ifndef BOOKSREPOSITORY_H
#define BOOKSREPOSITORY_H

typedef struct Book {
        char title[30];
        char author[15];
        int year;
} Book;

// Busca livros pelo título
int findByTitle(struct Book *books, char title[30]);
// Busca livros pelo autor
int findByAuthor(struct Book *books, char author[15]);
// Busca livros pelo ano
int findByYear(struct Book *books, int year);

#endif
