#include <cstdint>  // for std::int_fast64_t

// exp must be non-negative
std::int_fast64_t pow(int base, unsigned int exp)
{
    std:int_fast64_t result = 1;
    while(exp)
    {
        if(exp & 1)
        {
            result *= base;
        }
        exp >>= 1 ;
        base *= base;
    }

    return result;
}