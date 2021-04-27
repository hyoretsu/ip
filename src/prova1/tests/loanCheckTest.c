#include <check.h>
#include "../funcs/loanCheck.c"

const char *analysisArray[2];

START_TEST(test_loan_denial) {

    loanCheck(1000, 11000, 120, analysisArray);
    ck_assert_str_eq(analysisArray[0], "Empréstimo não concedido");
    ck_assert_str_eq(analysisArray[1], "\0");
} END_TEST

START_TEST(test_profile_vip) {

    loanCheck(1000, 4000, 45, analysisArray);
    ck_assert_str_eq(analysisArray[0], "Empréstimo concedido");
    ck_assert_str_eq(analysisArray[1], "Perfil VIP");
} END_TEST

START_TEST(test_profile_normal) {

    loanCheck(1000, 6000, 65, analysisArray);
    ck_assert_str_eq(analysisArray[0], "Empréstimo concedido");
    ck_assert_str_eq(analysisArray[1], "Perfil Normal");
} END_TEST

START_TEST(test_profile_risky) {

    loanCheck(1000, 9000, 120, analysisArray);
    ck_assert_str_eq(analysisArray[0], "Empréstimo concedido");
    ck_assert_str_eq(analysisArray[1], "Perfil de Risco");
} END_TEST
