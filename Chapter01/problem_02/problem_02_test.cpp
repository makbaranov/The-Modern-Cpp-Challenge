#include <gtest/gtest.h>
#include <numeric>
#include "solution.h" 

TEST(ProblemTest, TEST1) {
    ASSERT_EQ(solution(0, 0), 0);
    ASSERT_EQ(solution(3, 5), 1);
    ASSERT_EQ(solution(5, 10), 5);
    ASSERT_EQ(solution(12, 18), 6);
    ASSERT_EQ(solution(23, 25), 1);
} 


TEST(ProblemTest, TEST2) {
    ASSERT_EQ(solution(156, 256), std::gcd(156, 256));
    ASSERT_EQ(solution(569, 25), std::gcd(569, 25));
    ASSERT_EQ(solution(12, 854), std::gcd(12, 854));
    ASSERT_EQ(solution(89631, 5267), std::gcd(89631, 5267));
    ASSERT_EQ(solution(14616884, 46546), std::gcd(14616884, 46546));
}