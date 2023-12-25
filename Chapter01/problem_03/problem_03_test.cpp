#include <gtest/gtest.h> 
#include <numeric>
#include "solution.h" 

TEST(ProblemTest, two_numbers) { 
    ASSERT_EQ(solution(10, 20), std::lcm(10, 20));
    ASSERT_EQ(solution(10, 6), std::lcm(10, 6));
    ASSERT_EQ(solution(144, 14), std::lcm(144, 14));
} 

TEST(ProblemTest, vec) {
    ASSERT_EQ(solution({6,10,20}), 60);
    ASSERT_EQ(solution({3,4,5}),60);
    ASSERT_EQ(solution({56,12,48}), 336);
    ASSERT_EQ(solution({3,4,5,6,7,8,9}), 2520);
}
