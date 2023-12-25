#include <gtest/gtest.h> 
#include <numeric>
#include "solution.h" 

TEST(ProblemTest, TEST1) { 
    ASSERT_EQ(solution(10, 20), std::lcm(10, 20));
    ASSERT_EQ(solution(10, 6), std::lcm(10, 6));
    ASSERT_EQ(solution(144, 14), std::lcm(144, 14));
} 
