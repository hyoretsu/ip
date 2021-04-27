#include <check.h>
#include "../funcs/energyConsumption.c"

int result;
START_TEST(test_room_a) {
    result = energyConsumption("A", 1, 8);

    ck_assert_int_eq(result, 2);
} END_TEST

START_TEST(test_room_b) {
    result = energyConsumption("B", 1, 11);

    ck_assert_int_eq(result, 1);
} END_TEST

START_TEST(test_room_c) {
    result = energyConsumption("C", 1, 15);

    ck_assert_int_eq(result, 1);
} END_TEST

START_TEST(test_room_d) {
    result = energyConsumption("D", 1, 18);

    ck_assert_int_eq(result, 1);
} END_TEST

START_TEST(test_room_e) {
    result = energyConsumption("E", 1, 22);

    ck_assert_int_eq(result, 1);
} END_TEST
