#include <check.h>
#include "../funcs/polygonArea.c"

START_TEST(test_circle_area) {
    int result = calcArea(1, 0, 0, 1);

    ck_assert_int_eq(result, 3.14);
} END_TEST

START_TEST(test_triangle_area) {
    int result = calcArea(2, 5, 2, 0);

    ck_assert_int_eq(result, 5);
} END_TEST

START_TEST(test_rectangle_area) {
    int result = calcArea(3, 5, 2, 0);

    ck_assert_int_eq(result, 10);
} END_TEST
