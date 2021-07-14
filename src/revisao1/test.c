#include <stdlib.h>
#include "./tests/index.c"

int main(void) {
  int no_failed;
  Suite *suite = suite_create("Aula de 22/04/2021");
  TCase *tc_core = tcase_create("Core");
  SRunner *runner= srunner_create(suite);

  tcase_add_test(tc_core, test_circle_area);
  suite_add_tcase(suite, tc_core);

  srunner_run_all(runner, CK_NORMAL);
  no_failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
