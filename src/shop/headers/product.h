#ifndef PRODUCT_H
#define PRODUCT_H

struct Product {
    int id;
    char name[100];
    char description[100];
    float* price;
} products[10];

#endif
