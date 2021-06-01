#include "gtest/gtest.h"
#include "test_add_rdudh001.hpp"
#include "../header/sublist.hpp"
#include "../header/task.hpp"
#include "../header/listelements.hpp"
#include "test_remove_rdudh001.hpp"
#include "test_find_rdudh001.hpp"
#include "test_mark_complete_rdudh001.hpp"
#include "test_sort_rdudh001.hpp"
#include "test_add_sort_rdudh001.hpp"
#include "test_getters_setters_rdudh001.hpp"
#include "test_print_rdudh001.hpp"

#include "sublist_task_copy_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
