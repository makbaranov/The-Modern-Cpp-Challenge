#include <gtest/gtest.h> 
#include "solution.h" 

TEST(ProblemTest, TEST1) {
    ASSERT_EQ(solution(0, 0), 0);
    ASSERT_EQ(solution(3, 5), 1);
    ASSERT_EQ(solution(5, 10), 5);
    ASSERT_EQ(solution(12, 18), 6);
    ASSERT_EQ(solution(23, 25), 1);
} 
