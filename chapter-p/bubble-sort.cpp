#include <iostream>
#include <algorithm>


int main()
{
    int array[] = {30, 90, 80, 60, 50, 20, 10, 40};
    int length = static_cast<int>(sizeof(array) / sizeof(array[0]));
    const int constLength = static_cast<int>(sizeof(array) / sizeof(array[0]));
    

    for(int index = 0; index < constLength; ++index)
    {
        std::cout << array[index] << ' ';
    }
    std::cout << '\n';

    bool sorted = false;
    int numberOfIterations = 0;
    int numberOfSteps = 0;
    while(!sorted)
    {
        bool thereWasASwap = false;

        // Compare and swap
        for (int index = 0; index < length - 1; ++index){
            numberOfSteps++;
            if (array[index] > array[index + 1])
            {
                std::swap(array[index], array[index + 1]);
                thereWasASwap = true;
            }
        }

        // Update whether the array is sorted
        sorted = !thereWasASwap;

        // Print
        for(int index = 0; index < constLength; ++index)
        {
            std::cout << array[index] << ' ';
        }
        std::cout << '\n';

        length--;
        numberOfIterations++;
    }
    std::cout << "Terminated on iteration " << numberOfIterations << " with " << numberOfSteps << " steps." << '\n';




    return 0;
}