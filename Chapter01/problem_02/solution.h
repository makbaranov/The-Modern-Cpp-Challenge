// Greatest common divisor
// Write a program that, given two positive integers, will calculate and print the greatest
// common divisor of the two.

unsigned solution_old(unsigned a, unsigned b) {
    unsigned result = 0;
    for (unsigned i = 1; i <= (std::min(a, b)); i++) {
        if (a % i == 0 && b % i == 0)
            result = i;
    }
    return result;
}


unsigned euclid(unsigned a, unsigned b) {
    if (b != 0)
        return euclid(b, a%b);
    return a;
}

unsigned solution(unsigned a, unsigned b) {
    return euclid(std::max(a, b), std::min(a, b));
}
