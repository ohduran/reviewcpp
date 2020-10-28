#include <iostream>
#include <iterator>

int main()
{
    const int scores[] = {4, 6, 7, 3, 8, 2, 1, 9, 5};
    const int numStudents = static_cast<int>(sizeof(scores) / sizeof(scores[0]));

    for (int student = 0; student < numStudents; student++)
    {
        std::cout << scores[student] << '\n';
    }

    return 0;
}