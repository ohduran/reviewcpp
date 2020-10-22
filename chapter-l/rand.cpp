#include <iostream>
#include <cstdlib>  // for std::rand and std::srand
#include <ctime>  // for std::time

int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (RAND_MAX + 1.0);  // so that rand * fraction in [0, 1)
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

int main()
{
    unsigned int clock = std::time(nullptr);
    std::srand(clock);

    std::rand();

    for (int i = 1; i <= 100; i++)
    {
        std::cout << getRandomNumber(1, 6) << '\t';

        if (i % 5 == 0)
            std::cout << "\n";
    }
    return 0;
}