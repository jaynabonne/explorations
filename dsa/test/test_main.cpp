#include <gtest/gtest.h>
#include <gmock/gmock.h>

using testing::Eq;

// A simple test case
TEST(DummyTest, should_fail)
{
    EXPECT_THAT(false, Eq(true));
}
