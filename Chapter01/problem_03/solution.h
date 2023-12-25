// Write a program that will, given two or more positive integers, calculate and print the least
// common multiple of them all.
#include <numeric>

int solution(int a, int b) {
    return a * b / std::gcd(a, b);
}
