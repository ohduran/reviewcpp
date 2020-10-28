#include <iostream>
#include <iterator>

int main()
{
    const int scores[] = {84, 92, 76, 81, 56};
    const int numStudents = static_cast<int>(sizeof(scores) / sizeof(scores[0]));

    int maxScore = 0;
    for (int student = 0; student < numStudents; student++)
    {
        if (scores[student] > maxScore)
        {
            maxScore = scores[student];
        }
    }

    std::cout << "The best score was " << maxScore << "\n";
    return 0;
}