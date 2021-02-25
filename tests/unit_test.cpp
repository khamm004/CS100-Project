#include "gtest/gtest.h"
#include "shield_test.hpp"
#include "dust_test.hpp"
#include "iron_gauntlet_test.hpp"
#include "magic_ruby_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
