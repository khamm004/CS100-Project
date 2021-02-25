#include "gtest/gtest.h"
#include "shield_test.hpp"
#include "dust_test.hpp"
#include "ironGauntlet_test.hpp"
#include "magicRuby_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
