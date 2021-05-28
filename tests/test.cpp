#include "gtest/gtest.h"
#include "test_add_rdudh001.hpp"
#include "../header/sublist.hpp"
#include "../header/task.hpp"
#include "../header/listelements.hpp"
#include "test_remove_rdudh001.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
