#include <check.h>
#include "../funcs/triangleCheck.c"

START_TEST(test_triangle_exists) {
 char const *result = triangleCheck(1, 1, 2);

 ck_assert_str_eq(result, "Os valores inseridos não formam um triângulo válido.\n");
} END_TEST

START_TEST(test_triangle_type_check) {
 char const *result;

 result = triangleCheck(3, 3, 3);
 ck_assert_str_eq(result, "O triângulo é equilátero.\n");

 result = triangleCheck(2, 2, 3);
 ck_assert_str_eq(result, "O triângulo é isósceles.\n");

 result = triangleCheck(5, 7, 8);
 ck_assert_str_eq(result, "O triângulo é escaleno.\n");
} END_TEST
