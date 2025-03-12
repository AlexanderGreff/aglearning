
#include "gtest/gtest.h"
#include "prf/core/Sample.hpp"

namespace {
// In this example, we test the MyString class (a simple string).

// Tests the default c'tor.
TEST(MyDemo, sample)
 {

std::string s = "Hello, world!";

  EXPECT_EQ(13, s.size());
}

} // end namespace
