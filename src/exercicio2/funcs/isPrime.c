#include <math.h>
#include <stdbool.h>

bool isPrime(int number) {
    if (number == 2 || number == 3) {
        return true;
    } else if (number <= 1 || (number % 2 == 0) || (number % 3 == 0)) {
        return false;
    }

    for (int i = 5; pow(i, 2) <= number; i += 6) {
        if ((number % i) == 0 || (number % (i + 2)) == 0) {
            return false;
        }
    }

    return true;
};
