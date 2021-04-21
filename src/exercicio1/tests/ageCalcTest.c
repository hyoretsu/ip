#include <check.h>
#include "../funcs/ageCalc.c"

START_TEST(test_age) {
    int birthDay = 9, birthMonth = 5, birthYear = 2003;
    int result = ageCalc(birthDay, birthMonth, birthYear);

    if ((currentMonth < birthMonth) || (currentMonth == birthMonth && currentDay < birthDay)) {
        ck_assert_int_eq(result, (currentYear - 2003) - 1);
    } else {
        ck_assert_int_eq(result, (currentYear - 2003));
    }
} END_TEST
