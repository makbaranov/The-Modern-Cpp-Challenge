// Greatest common divisor
// Write a program that, given two positive integers, will calculate and print the greatest
// common divisor of the two.

unsigned solution(unsigned a, unsigned b) {
    unsigned result = 0;
    for (unsigned i = 1; i <= (std::min(a, b)); i++) {
        if (a % i == 0 && b % i == 0)
            result = i;
    }
    return result;
}
