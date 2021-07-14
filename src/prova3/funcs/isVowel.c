#include "../headers/isVowel.h"

// Why are here... Just to suffer?
int isVowel(char character[2]) {
    if (
        character[0] == 'A' ||
        character[0] == 'a' ||
        character[0] == 'I' ||
        character[0] == 'i' ||
        character[0] == 'U' ||
        character[0] == 'u' ||
        character[0] == 'E' ||
        character[0] == 'e' ||
        character[0] == 'O' ||
        character[0] == 'o'
    ) {
            return 1;
    }

    return 0;
}
