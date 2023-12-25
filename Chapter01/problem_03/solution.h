// Write a program that will, given two or more positive integers, calculate and print the least
// common multiple of them all.
#include <numeric>
#include <vector>

int solution(int a, int b) {
    return a * b / std::gcd(a, b);
}

int solution(std::vector<int> v) {
    return std::accumulate(v.begin(), v.end(), 1, [](int a, int b) {return std::lcm(a, b); });
}