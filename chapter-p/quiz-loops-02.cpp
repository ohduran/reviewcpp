#include <iostream>

int getInputNumber()
{
    while(true)
    {
        std::cout << "Enter an integer: ";
        int number;
        std::cin >> number;
        if (number > 0 && number < 10)
            return number;
        
        std::cout << "Wrong number, do it again\n";
    }
    
}

int main()
{
    const int scores[] = {4, 6, 7, 3, 8, 2, 1, 9, 5};
    const int numStudents = static_cast<int>(sizeof(scores) / sizeof(scores[0]));

    int number = getInputNumber();

    int index;
    for (int student = 0; student < numStudents; student++)
    {
        std::cout << scores[student] << '\t';
        if (scores[student] == number)
            index = student;
    }
    std::cout << '\n';
    std::cout << "The number you selected is in position " << index + 1 << '\n';

    return 0;
}