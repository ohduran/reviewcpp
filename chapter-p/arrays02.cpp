#include <iostream>

int main()
{
    int array[] = {0,1,2,3,4};

    std::cout << array[0] << '\n';
    std::cout << array[1] << '\n';
    std::cout << array[2] << '\n';
    std::cout << array[3] << '\n';
    std::cout << array[4] << '\n';

    enum StudentNames
    {
        kenny,
        kyle,
        stan,
        butters,
        cartman,
        max_students
    };

    int testScores[max_students];
    testScores[stan] = 76;

    return 0;
}