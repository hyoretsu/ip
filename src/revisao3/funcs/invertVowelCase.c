#include <ctype.h>
#include <string.h>
#include "../headers/invertVowelCase.h"

void invertVowelCase(char word[47]) {
    int vowels = 0;

    for (size_t i = 0; i < strlen(word); i++) {
        switch (word[i]) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                word[i] = tolower(word[i]);
                vowels += 1;
                break;
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                word[i] = toupper(word[i]);
                vowels += 1;
                break;
        }
    }

    return vowels;
}
