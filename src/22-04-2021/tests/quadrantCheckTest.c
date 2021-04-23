#include <check.h>
#include "../funcs/quadrantCheck.c"

START_TEST(test_origin) {
    const char *result = quadrantCheck(0, 0);

    ck_assert_str_eq(result, "na origem");
} END_TEST

START_TEST(test_x_axis) {
    const char *result = quadrantCheck(1, 0);

    ck_assert_str_eq(result, "no eixo X");
} END_TEST

START_TEST(test_y_axis) {
    const char *result = quadrantCheck(0, 1);

    ck_assert_str_eq(result, "no eixo Y");
} END_TEST

START_TEST(test_quadrants) {
    const char *result;

    result = quadrantCheck(1, 1);
    ck_assert_str_eq(result, "no quadrante I");

    result = quadrantCheck(-1, 1);
    ck_assert_str_eq(result, "no quadrante II");

    result = quadrantCheck(-1, -1);
    ck_assert_str_eq(result, "no quadrante III");

    result = quadrantCheck(1, -1);
    ck_assert_str_eq(result, "no quadrante IV");
} END_TEST
