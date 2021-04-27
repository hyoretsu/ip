#include <check.h>
#include "../funcs/sortNumbers.c"

START_TEST(test_number_sorting) {
    int numbersArray[4] = {2, 5, 1, 10};
    sort(numbersArray, sizeof(numbersArray) / 4);

    ck_assert_int_eq(numbersArray[0], 1);
    ck_assert_int_eq(numbersArray[1], 2);
    ck_assert_int_eq(numbersArray[2], 5);
    ck_assert_int_eq(numbersArray[3], 10);
} END_TEST
