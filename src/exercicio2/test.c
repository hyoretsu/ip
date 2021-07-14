#include <stdlib.h>
#include "./tests/index.c"

int main(void) {
  int no_failed;
  Suite *suite = suite_create("Aula de 22/04/2021");
  TCase *tc_core = tcase_create("Core");
  SRunner *runner= srunner_create(suite);

  tcase_add_test(tc_core, test_number_sorting);
  tcase_add_test(tc_core, test_loan_denial);
  tcase_add_test(tc_core, test_profile_vip);
  tcase_add_test(tc_core, test_profile_normal);
  tcase_add_test(tc_core, test_profile_risky);
  tcase_add_test(tc_core, test_room_a);
  tcase_add_test(tc_core, test_room_b);
  tcase_add_test(tc_core, test_room_c);
  tcase_add_test(tc_core, test_room_d);
  tcase_add_test(tc_core, test_room_e);
  tcase_add_test(tc_core, test_pound_kg);
  tcase_add_test(tc_core, test_ounce_g);
  tcase_add_test(tc_core, test_gallon_liter);
  tcase_add_test(tc_core, test_mile_km);
  tcase_add_test(tc_core, test_yard_meter);
  suite_add_tcase(suite, tc_core);

  srunner_run_all(runner, CK_NORMAL);
  no_failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
