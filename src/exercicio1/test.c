#include <stdlib.h>
#include "./tests/index.c"

int main(void) {
  int no_failed;
  Suite *suite = suite_create("Exercício 1");
  TCase *tc_core = tcase_create("Core");
  SRunner *runner= srunner_create(suite);

  tcase_add_test(tc_core, test_conversion);
  tcase_add_test(tc_core, test_number_operations);
  tcase_add_test(tc_core, test_distance_calc);
  tcase_add_test(tc_core, test_age);
  tcase_add_test(tc_core, test_triangle_exists);
  tcase_add_test(tc_core, test_triangle_type_check);
  suite_add_tcase(suite, tc_core);

  srunner_run_all(runner, CK_NORMAL);
  no_failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
