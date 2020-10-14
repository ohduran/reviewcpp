#include <iostream>
#include <iomanip>  // for setprecision

int main()
{
    int i = 30000;
    char c = i;
    std::cout << i % 128 << std::endl;  // see that the modulo is 48, which means that the char is overflowed.
    std::cout << static_cast<int>(c) << std::endl;  // overflows to 48

    int j = 2;
    short s = j;
    std::cout << s % 32768 << std::endl;  // doesn't overflow, 2 ^ (16- 1)
    std::cout << s<< std::endl;  // doesn't overflow.

    double d = 0.1234;
    float f = d;
    std::cout << f << std::endl;  // doesn't overflow

    float g = 0.123456789;  // 9 significant digits vs float supporting +/- 7.
    std::cout << std::setprecision(9) << g << std::endl;  // 0.123456791

    int k = 3.5;
    std::cout << k << std::endl; // implicit conversion from 'double' to 'int' changes value from 3.5 to 3

    std::cout << 5u - 10 << std::endl;  // you would expect -5, but 10 is promoted to unsigned (preference) and the expression is evaluated as unsigned: 4294967291

    return 0;
}