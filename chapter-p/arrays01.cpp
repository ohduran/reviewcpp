#include <iostream>

int main()
{

    int primes[5];
    primes[0] = 2;
    primes[1] = 3;
    primes[2] = 5;
    primes[3] = 7;
    primes[4] = 11;


    std::cout << "The sum of the first 5 primess is " << primes[0] + primes[1] + primes[2] + primes[3] + primes[4] << '\n';

    return 0;
}