#include <check.h>
#include "../funcs/numberOperations.c"

START_TEST(test_number_operations) {
 double result[5];
 numberOperations(1, 2, result);

 ck_assert_int_eq(result[0], 3);
 ck_assert_int_eq(result[1], 4);
 ck_assert_int_eq(result[2], -3);
 ck_assert_int_eq(result[3], 2.24);
 ck_assert_int_eq(result[4], -0.84);
} END_TEST
