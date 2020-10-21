#include <iostream>
#include <cstdlib> // for std::rand()

static int MAX_ATTEMPTS = 7;
static int MIN_GUESS = 1;
static int MAX_GUESS = 100;

int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (RAND_MAX + 1.0);
    // evenly distribute the random number across our range
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}


int getGuess(int attemptNumber)
{
    while(true)
    {
        std::cout << "Guess #" << attemptNumber << ": ";
        int x;
        std::cin >> x;
        

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
        }
        else
        {
            std::cin.ignore(32767, '\n'); // ignore everything that comes after the double inserted in x
            return x;
        }
    }
    
}

bool decideToPlayAgain()
{
    while (true)
    {
        std::cout << "Would you like to play again (y/n)? ";
        char YesNo;
        std::cin >> YesNo;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
        }
        else
        {
            std::cin.ignore(32767, '\n'); // ignore everything that comes after the double inserted in x
            switch (YesNo)
            {
                case 'y':
                    return true;
                case 'n':
                    return false;
            }
        }        
    }
}

bool playTheGame(int correctNumber)
{
    for(int attemptNumber = 1; attemptNumber <= MAX_ATTEMPTS; attemptNumber++)
    {
        int guess = getGuess(attemptNumber);
        if (guess == correctNumber)
        {
            std::cout << "Correct! You win!\n";
            return true;
        }
        else if (guess > correctNumber)
        {
            std::cout << "Your guess is too high.\n";
        }
        else if (guess < correctNumber)
        {
            std::cout << "Your guess is too low.\n";
        }
    }
    std::cout << "Sorry, you lose. The correct number was " << correctNumber << "\n";
    return false;
}

int main()
{
    bool playAgain;
    do
    {
        std::cout << "Let's play a game. I'm thinking of a number between "<< MIN_GUESS << " and " << MAX_GUESS <<". You have "<< MAX_ATTEMPTS << " tries to guess what it is.\n";
        int correctNumber = getRandomNumber(MIN_GUESS, MAX_GUESS);

        playTheGame(correctNumber);

        playAgain = decideToPlayAgain();
    }
    while(playAgain);
    std::cout << "Thank you for playing.\n";
}