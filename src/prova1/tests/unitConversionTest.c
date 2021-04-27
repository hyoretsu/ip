#include <check.h>
#include <string.h>
#include "../funcs/unitConversion.c"

// Mass
START_TEST(test_pound_kg) {
    strcpy(magnitude, "P");
    float result;

    // Pound -> Kg
    // result = unitConversion(magnitude, 1, 2.205);
    // ck_assert_int_eq(result, 1);

    // Kg -> Pound
    result = unitConversion(magnitude, 2, 1);
    ck_assert_int_eq(result, 2.205);
} END_TEST
START_TEST(test_ounce_g) {
    strcpy(magnitude, "P");
    float result;

    // Ounce -> Gram
    result = unitConversion(magnitude, 3, 1);
    ck_assert_int_eq(result, 28.35);

    // Gram -> Ounce
    result = unitConversion(magnitude, 4, 28.35);
    ck_assert_int_eq(result, 1);
} END_TEST

// Volume
START_TEST(test_gallon_liter) {
    strcpy(magnitude, "V");
    float result;

    // Gallon -> Liter
    result = unitConversion(magnitude, 1, 1);
    ck_assert_int_eq(result, 3.785);

    // Liter -> Gallon
    result = unitConversion(magnitude, 2, 3.785);
    ck_assert_int_eq(result, 1);
} END_TEST

// Distance
START_TEST(test_mile_km) {
    strcpy(magnitude, "C");
    float result;

    // Mile -> Km
    result = unitConversion(magnitude, 1, 1);
    ck_assert_int_eq(result, 1.609);

    // Km -> Mile
    result = unitConversion(magnitude, 2, 1.609);
    ck_assert_int_eq(result, 1);
} END_TEST
START_TEST(test_yard_meter) {
    strcpy(magnitude, "C");
    float result;

    // Yard -> Meter
    result = unitConversion(magnitude, 3, 1.094);
    ck_assert_int_eq(result, 1);

    // Meter -> Yard
    result = unitConversion(magnitude, 4, 1);
    ck_assert_int_eq(result, 1.094);
} END_TEST
