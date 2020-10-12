#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int x = 5;

    // WARNING: unsequenced modification and access to 'x' [-Wunsequenced]
    int value = add(x, ++x);  // is this 5 + 6, or 6 + 6??????

    std::cout << value;

    std::cout << std::endl;

    return 0;

}