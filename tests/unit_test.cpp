#include "gtest/gtest.h"
#include "strategy_tests.hpp"
#include "weapons_test.hpp"
#include "defense_test.hpp"
#include "characters_test.hpp"
#include "menu_test.hpp"

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
