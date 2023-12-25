
long long solution(unsigned limit) {
    long long sum = 0;
    for (unsigned i = 0; i < limit; i++)
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    return sum;
}