#include <check.h>
#include "../funcs/unitConversion.c"

START_TEST(test_conversion) {
 int result[3];
 unitConversion(1, result);

 ck_assert_int_eq(result[0], 10);
 ck_assert_int_eq(result[1], 100);
 ck_assert_int_eq(result[2], 1000);
} END_TEST
