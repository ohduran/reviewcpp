#include <iostream>

int main()
{
    int array[3][5] = 
    {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
    };

    for (int row = 0; row < 3; ++row) // step through the rows in the array
    {
        for (int col = 0; col < 5; ++col) // step through each element in the row
        {
            std::cout << array[row][col] << '\t';
        }
        std::cout << '\n';
    }
}