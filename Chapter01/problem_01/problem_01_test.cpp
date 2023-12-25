#include <gtest/gtest.h>
#include "solution.h"

TEST(ProblemTest, SmallNumbers) {
	ASSERT_EQ(solution(0), 0);
	ASSERT_EQ(solution(3), 0);
	ASSERT_EQ(solution(4), 3);
	ASSERT_EQ(solution(5), 3);
	ASSERT_EQ(solution(6), 8);
	ASSERT_EQ(solution(10), 23);
	ASSERT_EQ(solution(22), 119);
}

TEST(ProblemTest, BigNumbers) {
	ASSERT_EQ(solution(1001), 234168);
	ASSERT_EQ(solution(50000), 583291668);
	ASSERT_EQ(solution(100000), 2333316668);
	ASSERT_EQ(solution(1000000), 233333166668);
	ASSERT_EQ(solution(10000000), 23333331666668);
	ASSERT_EQ(solution(100000000), 2333333316666668);
}