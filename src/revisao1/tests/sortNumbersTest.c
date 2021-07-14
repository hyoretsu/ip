#include <check.h>
#include "../funcs/sortNumbers.c"

START_TEST(test_number_sorting) {
    int numbersArray[] = {2, 5, 1};
    sort(numbersArray, sizeof(numbersArray) / 4);

    ck_assert_int_eq(numbersArray[0], 1);
    ck_assert_int_eq(numbersArray[1], 2);
    ck_assert_int_eq(numbersArray[2], 5);
} END_TEST
