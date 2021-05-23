#include "gtest/gtest.h"
#include "Fact_Doubles_Tests.hpp"
#include "Fact_Neg_Invalid_Tests.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
