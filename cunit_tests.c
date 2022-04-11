#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "hello_world.h"

void test_add(void){
  CU_ASSERT(add(2,2) == 4);
  CU_ASSERT(add(0, 0) == 0);
  CU_ASSERT(add(-1, 1) == 0);
}

int main()
{
  CU_initialize_registry();
  
  CUpSuite suite1 = CU_add_suit(“test_add”, 0, 0);

  CU_add_test(suite1, “test_add”, test_add);

  CU_basic_set_mode(CU_BRM_VERBOSE);

  CU_basic_run_tests();

  CU_cleanup_registry();

  return 0;
  
}
