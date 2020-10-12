#include <iomanip>
#include <iostream>

int main(int argc, char const *argv[])
{
    float f = 123456789.0f;
    std::cout << std::setprecision(9);

    std::cout << f << "\n";
    return 0;
}
