#include <check.h>
#include "../funcs/distanceCalc.c"

START_TEST(test_distance_calc) {
 int result;

 result = distanceCalc(1, 2, 2, 3);
 ck_assert_int_eq(result, 1.41);
} END_TEST
