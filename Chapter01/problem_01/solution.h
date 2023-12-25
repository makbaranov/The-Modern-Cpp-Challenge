// Sum of naturals divisible by 3 and 5
// Write a program that calculates and prints the sum of all the natural numbers divisible by
// either 3 or 5, up to a given limit entered by the user.

long long solution(unsigned limit) {
    long long sum = 0;
    for (unsigned i = 0; i < limit; i++)
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    return sum;
}