#include <check.h>
#include "../funcs/ageCalc.c"

const char *strResult;

START_TEST(test_leap_year) {
    // Fevereiro tem 29 dias em anos bissextos
    strResult = isValid(29, 2, 2004);
    ck_assert_str_eq(strResult, "A data inserida é válida.\n");
} END_TEST

START_TEST(test_valid_day) {
    // Fevereiro só tem 28 dias
    strResult = isValid(29, 2, 2003);
    ck_assert_str_eq(strResult, "O dia que você inseriu é inválido. Tente novamente.\n");

    // Novembro só tem 30 dias
    strResult = isValid(31, 11, 2003);
    ck_assert_str_eq(strResult, "O dia que você inseriu é inválido. Tente novamente.\n");

    // Dezembro só tem 31 dias
    strResult = isValid(32, 12, 2003);
    ck_assert_str_eq(strResult, "O dia que você inseriu é inválido. Tente novamente.\n");
} END_TEST

START_TEST(test_valid_month) {
    // Não existe um mês 13
    strResult = isValid(9, 13, 2003);
    ck_assert_str_eq(strResult, "O mês que você inseriu é inválido. Tente novamente.\n");
} END_TEST

START_TEST(test_age) {
    int birthDay = 9, birthMonth = 5, birthYear = 2003;
    const char *resultValid;

    resultValid = isValid(birthDay, birthMonth, birthYear);
    ck_assert_str_eq(resultValid, "A data inserida é válida.\n");

    int result = ageCalc(birthDay, birthMonth, birthYear);

    if ((currentMonth < birthMonth) || (currentMonth == birthMonth && currentDay < birthDay)) {
        ck_assert_int_eq(result, (currentYear - 2003) - 1);
    } else {
        ck_assert_int_eq(result, (currentYear - 2003));
    }
} END_TEST
